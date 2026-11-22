/* NON_MATCHING: the control flow, calls and data accesses follow retail (about 94% of retail's instructions
 * line up once registers and stack offsets are ignored), but the register allocation differs from the start
 * of the loop on: retail keeps 1/7 in a fifth callee-saved VFP register (vpush d8-d10) and 1.0f in s17 for the
 * whole function, spills other values, and so assigns different registers and stack slots (frame 228 against
 * 236). The HP/MP gauge calls differ most: retail stores their constant stack arguments in each branch (the MP
 * position through VFP registers) where this build hoists them, and armcc here cross-jumps two calls retail
 * keeps apart (the HP gauge's gain/loss calls, the gauge scissor). */
#include "common.h"
#include <stdio.h>
#include "shard/PlayScene.h"
#include "shard/GameOptions.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "shard/W6_W6Match5_EntryCollection.h"
#include "shard/W6_W6Match6_CecMessageBox.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "camp/Unite/UniteWork.h"
#include "ui/UiSpriteApi.h"
#include "ui/UiControl.h"
#include "ui/AnimatedMessage.h"
#include "text/TextDraw.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/SupportUnitRecord.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BtlEntry.h"
#include "code/Code0028.h"
#include "code/Code0029.h"
#include "code/Code002b.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "util/BitsAndBytes.h"
#include "ui/ScreenPoint.h"
#include "sys/RuntimeObjects_Smt4.h"
#include "code/Code0025_Smt4.h"

struct BtlActor;
struct FadeObject;

/* A pulsing tint: its colour, the period and the dimmest fraction of each channel. */
struct PulseColor {
    /* 0x00 */ u8 r;
    /* 0x01 */ u8 g;
    /* 0x02 */ u8 b;
    /* 0x03 */ u8 a;
    /* 0x04 */ s32 period;
    /* 0x08 */ f32 dim;
};

extern "C" {

extern PulseColor DAT_00435e00;

/* Sets the scissor rectangle. */
void gxSetMirroredClippedScissor(s32 x, s32 y, u32 width, s32 height, s32 useNarrowScreen);
s32 btlLinkGetMaxHp(BtlUnitLink *record);
u8 isLowThreshold(s32 current, s16 max);
void drawSetColorFromRGBA8(u32 packed);
f32 mathSinFixedAngle(f32 x);
void textureLoadOptionalDemonModel(s32 id, s32 x, s32 y, u32 layer, s32 mapped);
s32 FUN_0026e6a0(s32 a, s32 b, s32 period, s32 time, s32 invert);
void fadeObjectResetIfActive(FadeObject *object);
u32 btlActorIsDown(BtlActor *actor);
SupportUnitRecord *supportUnitGetEntry(s32 kind, u32 index);
void FUN_002b6940(s32 icon, s32 x, s32 y, s32 z);
void uiDrawDemonIcon(u32 demon, s32 x, s32 y, u32 style, s32 highlight);
/* Draws an HP gauge (and its pending change) from the sprites of texture table `table`. */
void FUN_002be90c(s32 value, s32 max, s32 change, u32 base, u32 table, u32 frame, u32 fill, u32 gain,
                  u32 loss, ScreenPoint position, u32 layer, u32 flags);
/* Draws an MP gauge, likewise. */
void FUN_002888a8(s32 value, s32 max, s32 change, u32 base, u32 table, u32 fill, u32 gain, u32 loss,
                  ScreenPoint position, u32 layer, u32 flags);
/* Draws a number string with digit sprites (`digits` wide). */
void FUN_002bdf94(u32 font, s32 x, s32 y, u32 align, u32 digits, u32 layer, const char *text);

/* Switches scissoring (3: on, 0: off). */
static __inline void hudSetScissor(s32 state)
{
    renderCtxSetStackTop(g_titleScene, RENDER_STACK_SCISSOR, state);
}

/* A panel's HP gauge: a pending change (`delta`) or the running one (`change` from `base`). */
static __inline void drawHpGauge(s16 hp, s16 maxHp, s32 delta, s32 change, u32 base, ScreenPoint position)
{
    if (delta != 0) {
        if (delta > 0) {
            FUN_002be90c(hp, maxHp, delta, 0, 21, 10, 13, 12, 11, position, 21, 0);
        } else {
            FUN_002be90c(hp, maxHp, delta, 0, 21, 10, 13, 12, 11, position, 21, 0);
        }
    } else {
        FUN_002be90c(hp, maxHp, change, base, 21, 10, 13, 12, 11, position, 21, 0);
    }
}

/* A panel's MP gauge. */
static __inline void drawMpGauge(s16 mp, s16 maxMp, s32 delta, s32 change, u32 base, s32 x, s32 y)
{
    ScreenPoint position = {x, y};
    if (delta != 0) {
        FUN_002888a8(mp, maxMp, delta, 0, 21, 14, 16, 15, position, 21, 0);
    } else {
        FUN_002888a8(mp, maxMp, change, base, 21, 14, 16, 15, position, 21, 0);
    }
}

/* A panel's shake amplitude with `frames` of its 15 left: eased from 8 pixels down to 0 over a quarter
 * turn (mathSinFixedAngle takes 256ths of a turn: 40.743664 per radian). */
static __inline f32 shakeAmplitude(s32 frames)
{
    return (1.0f - mathSinFixedAngle((15 - frames) * 1.5707964f / 15.0f * 40.743664f)) * 8.0f;
}

/* The ailment bits of the unit shown in panel `member` (0 when the panel is empty). */
static __inline u16 partyMemberAilments(PlayScene *scene, s32 member)
{
    u16 ailments = 0;
    if (member == 0) {
        ailments = gameGetPlayerData()->ailments;
    } else if (scene->party.unitIndices[member] >= 0) {
        ailments = gameGetUnitRecord(scene->party.unitIndices[member])->ailments;
    }
    return ailments;
}

/* Draws the party display: a panel for the player and each party member (frame, name, level, HP and
 * MP gauges, ailment icons, model) and the guest's panel. */
void FUN_0025f6b8(PlayScene *scene, s32 expanded, s32 allLit, s32 lift, s32 dimGuest)
{
    if (scene->unk3084 != 0) {
        allLit = 1;
    }
    s32 shift = lift * 8;
    if (shift > 40) {
        shift = 40;
    }
    s32 originX = scene->party.originX;
    s16 maxHp = 0;
    s32 originY = scene->party.originY;
    s16 maxMp = 0;
    f32 alpha;
    char name[40];
    char hpText[8];
    char mpText[8];
    char levelText[8];
    s32 member;

    for (member = 0; member < 4; member++) {
        alpha = 1.0f;
        if (allLit == 0 && scene->unk305C != member) {
            alpha = 0.5f;
        }
        efctSetSpeed(alpha);
        TextureTableEntryIV *frame = asdTMTexTableEntryAt(21, member + 0x36);
        s32 x = vec2GetXInt(&scene->memberFrames[member]) + frame->x;
        s32 y = vec2GetYInt(&scene->memberFrames[member]) + frame->y;
        s32 slideX = vec2GetXInt(&scene->timer);
        s32 slideY = vec2GetYInt(&scene->timer);
        x = x + slideX + originX;
        y = y + slideY + originY;
        TextureTableEntryIV *entry;

        if (scene->slideShown[member] != 0) {
            TextureTableEntryIV *plate = asdTMTexTableEntryAt(21, member + 0x46);
            s32 timer = scene->slideTimers[member];
            if (timer < 7) {
                alpha = 1.0f - timer * (1.0f / 7.0f);
                y += plate->placement->height / 7 * timer;
            } else if (timer < 22) {
                alpha = 0.0f;
                y += plate->placement->height;
            } else if (timer < 30) {
                if (scene->slideDown[member] != 0) {
                    y += plate->placement->height / 8 * (22 - timer) + plate->placement->height;
                    alpha = (timer - 22) * 0.125f;
                } else {
                    y -= plate->placement->height / 8 * (22 - timer) + plate->placement->height;
                    alpha = (timer - 22) * 0.125f;
                }
            }
            efctSetSpeed(alpha);
            hudSetScissor(3);
            gxSetMirroredClippedScissor(plate->x, plate->y, plate->placement->width, plate->placement->height - shift, 1);
        }

        if (scene->party.vacant[member] != 0 && member > 0) {
            if (expanded != 0) {
                entry = asdTMTexTableEntryAt(21, 0x3A);
                hudSetScissor(3);
                gxSetMirroredClippedScissor(entry->x + x, entry->y + y, entry->placement->width, entry->placement->height - shift, 1);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                texDrawTableEntryAtStoredOrigin(2, 21, 0x3A, x, y, 6);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
                entry = asdTMTexTableEntryAt(21, 0x45);
                texDrawTableEntryAtStoredOrigin(2, 21, 27, entry->x + x + entry->placement->width / 2,
                                                entry->y + y + entry->placement->height / 2 - shift / 2, 11);
                hudSetScissor(0);
            } else {
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                texDrawTableEntryAtStoredOrigin(2, 21, 0, x, y, 6);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
                entry = asdTMTexTableEntryAt(21, 0x35);
                texDrawTableEntryAtStoredOrigin(2, 21, 27, entry->x + x + ((entry->width & ~0x8000) >> 1),
                                                entry->y + y + ((entry->height & ~0x8000) >> 1), 11);
            }
        } else {
            if (expanded != 0) {
                entry = asdTMTexTableEntryAt(21, 0x3A);
                if (scene->slideShown[member] == 0) {
                    hudSetScissor(3);
                    gxSetMirroredClippedScissor(entry->x + x, entry->y + y, entry->placement->width, entry->placement->height - shift, 1);
                }
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                texDrawTableEntryAtStoredOrigin(2, 21, 0x3A, x, y, 6);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
                if (scene->party.glowShown[member] != 0) {
                    if (member != 0) {
                        if (uiSpriteGetCompletionState(&scene->memberGlows[member]) != 0) {
                            entry = asdTMTexTableEntryAt(21, 0x45);
                            UiSpriteState *mark = &scene->memberGlowMarks[member];
                            s32 markX = vec2GetXInt(mark);
                            s32 markY = vec2GetYInt(mark);
                            efctSetSpeed(vec2GetSpeed(mark));
                            texDrawTableEntryAtStoredOrigin(2, 21, 27, entry->x + x + markX + entry->placement->width / 2,
                                                            markY + entry->placement->height / 2 + entry->y + y, 31);
                            efctSetSpeed(1.0f);
                        }
                        alpha = vec2GetSpeed(&scene->memberGlows[member]);
                        efctSetSpeed(alpha);
                    } else {
                        alpha = vec2GetSpeed(&scene->memberGlows[member]);
                        efctSetSpeed(alpha);
                    }
                }
                if (member == 0 && scene->party.vacant[member] != 0) {
                    alpha = vec2GetSpeed(&scene->memberGlows[member]);
                    efctSetSpeed(alpha);
                }
                texDrawTableEntryAtStoredOrigin(2, 21, 0x3B, x, y, 11);
                texDrawTableEntryAtStoredOrigin(2, 21, 0x3C, x, y, 11);
                texDrawTableEntryAtStoredOrigin(2, 21, 0x3D, x, y, 11);
                texDrawTableEntryAtStoredOrigin(2, 21, 0x3E, x, y - shift, 11);
                if (scene->slideShown[member] == 0) {
                    hudSetScissor(0);
                }
            } else {
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                texDrawTableEntryAtStoredOrigin(2, 21, 0, x, y, 6);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
                if (scene->party.glowShown[member] != 0) {
                    if (member == 0) {
                        alpha = vec2GetSpeed(&scene->memberGlows[member]);
                        efctSetSpeed(alpha);
                    } else {
                        if (uiSpriteGetCompletionState(&scene->memberGlows[member]) != 0) {
                            entry = asdTMTexTableEntryAt(21, 0x35);
                            UiSpriteState *mark = &scene->memberGlowMarks[member];
                            s32 markX = vec2GetXInt(mark);
                            s32 markY = vec2GetYInt(mark);
                            efctSetSpeed(vec2GetSpeed(mark));
                            texDrawTableEntryAtStoredOrigin(2, 21, 27, entry->x + x + markX + entry->placement->width / 2,
                                                            markY + entry->placement->height / 2 + entry->y + y, 31);
                            efctSetSpeed(1.0f);
                        }
                        alpha = vec2GetSpeed(&scene->memberGlows[member]);
                        efctSetSpeed(alpha);
                    }
                }
                if (scene->party.vacant[member] != 0 && member == 0) {
                    alpha = vec2GetSpeed(&scene->memberGlows[member]);
                    efctSetSpeed(alpha);
                }
                texDrawTableEntryAtStoredOrigin(2, 21, 1, x, y, 11);
                texDrawTableEntryAtStoredOrigin(2, 21, 2, x, y, 11);
                texDrawTableEntryAtStoredOrigin(2, 21, 3, x, y, 11);
                texDrawTableEntryAtStoredOrigin(2, 21, 4, x, y, 11);
            }
            texDrawTableEntryAtStoredOrigin(2, 21, 6, x, y, 14);
            texDrawTableEntryAtStoredOrigin(2, 21, 7, x, y, 14);
            texDrawTableEntryAtStoredOrigin(2, 21, 8, x, y, 14);
            texDrawTableEntryAtStoredOrigin(2, 21, 9, x, y, 14);

            /* the gauges' running change */
            s16 hpChange = 0;
            s16 mpChange = 0;
            if (scene->party.gaugeAnimating[member] != 0) {
                hpChange = scene->party.hpAnimations[member];
                mpChange = scene->party.mpAnimations[member];
                if (scene->party.gaugeRising[member] == 0) {
                    hpChange = -hpChange;
                    mpChange = -mpChange;
                }
            }
            sprintf(levelText, "%d", scene->party.levels[member]);

            s32 warning = 0;
            if (member == 0) {
                PlayerDataIV *player = gameGetPlayerData();
                maxHp = btlSourceGetMaxHp((BtlUnitSource *)player);
                maxMp = player->maxMp;
                sprintf(name, "%s", gameGetPlayerName());
                warning = FUN_00288ddc(maxHp, (u32)-1);
            } else if (scene->party.unitIndices[member] >= 0) {
                StatBlock *unit;
                if (scene->party.units[member].id == 0) {
                    unit = gameGetUnitRecord(scene->party.unitIndices[member]);
                } else {
                    unit = &scene->party.units[member];
                    scene->party.hpShown[member] = unit->hp;
                    scene->party.mpShown[member] = unit->mp;
                }
                maxHp = btlLinkGetMaxHp((BtlUnitLink *)unit);
                maxMp = unit->maxMp;
                sprintf(name, "%s", FUN_002bd068(unit->id));
                warning = FUN_00288ddc(maxHp, unit->id);
            }

            ScreenPoint position = {x, y};
            drawHpGauge(scene->party.hpShown[member], maxHp, scene->party.hpDeltas[member], hpChange,
                        scene->party.gaugeBases[member], position);
            drawMpGauge(scene->party.mpShown[member], maxMp, scene->party.mpDeltas[member], mpChange,
                        scene->party.gaugeBases[member], x, y);

            s16 hp = scene->party.hpShown[member] + hpChange;
            s16 mp = scene->party.mpShown[member] + mpChange;
            if (hp > maxHp) {
                hp = maxHp;
            }
            if (hp < 0) {
                hp = 0;
            }
            sprintf(hpText, "%d", hp);
            if (mp > maxMp) {
                mp = maxMp;
            }
            if (mp < 0) {
                mp = 0;
            }
            sprintf(mpText, "%d", mp);

            entry = asdTMTexTableEntryAt(21, 28);
            s32 advance = fontMeasureLineAdvance(name, 1);
            s32 center = (entry->placement->width - advance) / 2;
            s32 nameX = x + center + entry->x;
            s32 nameY = entry->y + y;
            textDrawString(nameX, nameY, 0.9f, 1, 0.0f, (u32)-1, alpha, name);
            if (isLowThreshold(hp, maxHp)) {
                drawSetColorFromRGBA8(0xDC0F14FF);
            } else if (warning != 0) {
                drawSetColorFromRGBA8(0x6EF0FFFF);
            }
            efctSetSpeed(alpha);
            entry = asdTMTexTableEntryAt(21, 32);
            FUN_002bdf94(0, entry->x + x, entry->y + y, 1, 4, 16, hpText);
            gxResetColorQuadToWhite();
            entry = asdTMTexTableEntryAt(21, 36);
            FUN_002bdf94(0, entry->x + x, entry->y + y, 1, 4, 16, mpText);

            TextureTableEntryIV *gauge;
            if (expanded != 0) {
                gauge = asdTMTexTableEntryAt(21, 0x43);
            } else {
                gauge = asdTMTexTableEntryAt(21, 0x33);
            }
            if (scene->slideShown[member] != 0) {
                TextureTableEntryIV *plate = asdTMTexTableEntryAt(21, member + 0x46);
                s32 bottom = plate->y + plate->placement->height;
                s32 top = gauge->y + y;
                if (bottom > top) {
                    s32 height = gauge->placement->height;
                    if (gauge->y + y + height > bottom) {
                        height = bottom - top;
                    }
                    hudSetScissor(0);
                    hudSetScissor(3);
                    gxSetMirroredClippedScissor(gauge->x + x, gauge->y + y, gauge->placement->width, height - shift, 1);
                }
            } else {
                hudSetScissor(3);
                gxSetMirroredClippedScissor(gauge->x + x, gauge->y + y, gauge->placement->width, gauge->placement->height - shift, 1);
            }

            s32 shakeX;
            s32 shakeY;
            s32 shake = scene->party.shakeTimers[member];
            if (shake > 0) {
                f32 amplitude = scene->party.shakeAmplitudes[member];
                if (shake & 1) {
                    amplitude = -amplitude;
                }
                shakeY = shakeX = (s32)amplitude;
                scene->party.shakeAmplitudes[member] =
                    shakeAmplitude(shake);
            } else {
                shakeY = shakeX = 0;
            }

            /* tint the model with the colour of the selected ailment */
            u16 count = 0;
            for (s32 ailment = 1; ailment < 11; ailment++) {
                if (partyMemberAilments(scene, member) & (1 << ailment)) {
                    if (scene->party.ailmentCursors[member] == count) {
                        drawSetColorFromRGBA8(categoryGetColor((s16)ailment));
                        break;
                    }
                    count++;
                }
            }
            entry = asdTMTexTableEntryAt(21, 0x44);
            if (member != 0) {
                if (scene->party.modelIds[member] > 0) {
                    if (FUN_00293f10((s16)scene->party.modelIds[member], 1) != 0) {
                        textureLoadOptionalDemonModel((s16)scene->party.modelIds[member], shakeX + x + entry->x,
                                                      entry->y + (y + shakeY), 21, 1);
                    }
                }
            } else {
                textureLoadOptionalDemonModel(-1, shakeX + x + entry->x, entry->y + (y + shakeY), 21, 1);
            }

            u16 badge = scene->badges[member];
            if (badge != 0) {
                if (badge == 5) {
                    if (partyMemberAilments(scene, member) & 0x10) {
                        efctSetSpeed(1.0f);
                        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                        u8 red = DAT_00435e00.r;
                        u8 green = DAT_00435e00.g;
                        u8 blue = DAT_00435e00.b;
                        u8 dimRed = (u32)(red * DAT_00435e00.dim);
                        u8 dimGreen = (u32)(green * DAT_00435e00.dim);
                        u8 dimBlue = (u32)(blue * DAT_00435e00.dim);
                        u32 pulseRed = FUN_0026e6a0(dimRed, red, DAT_00435e00.period, scene->badgeTimers[member], 0);
                        u8 pulseGreen = FUN_0026e6a0(dimGreen, green, DAT_00435e00.period, scene->badgeTimers[member], 0);
                        u8 pulseBlue = FUN_0026e6a0(dimBlue, blue, DAT_00435e00.period, scene->badgeTimers[member], 0);
                        drawSetColorFromRGBA8(pulseRed << 24 | pulseGreen << 16 | pulseBlue << 8 | DAT_00435e00.a);
                        entry = asdTMTexTableEntryAt(21, 0x43);
                        texDrawTableEntryAtStoredOrigin(2, 21, 2000, entry->x + (shakeX + x), entry->y + (y + shakeY), 31);
                        gxResetColorQuadToWhite();
                        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
                        efctSetSpeed(alpha);
                    } else {
                        scene->badges[member] = 0;
                    }
                }
                efctSetSpeed(vec2GetSpeed(&scene->badgeFades[member]));
                if (expanded != 0) {
                    texDrawTableEntryAtStoredOrigin(2, 21, 0x1C8, x + shakeX, y + shakeY, 26);
                } else {
                    texDrawTableEntryAtStoredOrigin(2, 21, 0x1C7, x + shakeX, y + shakeY, 26);
                }
                efctSetSpeed(alpha);
                hudSetScissor(0);
                TextureTableEntryIV *icon;
                if (expanded != 0) {
                    icon = asdTMTexTableEntryAt(21, 0x1CA);
                } else {
                    icon = asdTMTexTableEntryAt(21, 0x1C9);
                }
                s32 iconX = x + shakeX;
                s32 iconY = y + shakeY;
                pairSetHalves((Obj *)&scene->badgeIcons[member], icon->x + scene->badgeOffsetX[member] + iconX,
                              icon->y + scene->badgeOffsetY[member] + iconY);
                fadeObjectResetIfActive((FadeObject *)&scene->badgeIcons[member]);
                if (scene->badgeIconsLarge[member].updated != 0) {
                    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                    UiSpriteState *large = &scene->badgeIconsLarge[member];
                    pairSetHalves((Obj *)large, icon->x + iconX, icon->y + iconY);
                    large->extraScale = scene->badgeScales[member];
                    fadeObjectResetIfActive((FadeObject *)large);
                    fadeObjectResetIfActive((FadeObject *)large);
                    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
                }
            }
            gxResetColorQuadToWhite();

            if (expanded != 0) {
                texDrawTableEntryAtStoredOrigin(2, 21, 0x3F, x, y - shift, 31);
                entry = asdTMTexTableEntryAt(21, 0x42);
                FUN_002bdf94(0, entry->x + x, entry->y + y - shift, 1, 2, 36, levelText);
            } else {
                texDrawTableEntryAtStoredOrigin(2, 21, 5, x, y, 31);
                entry = asdTMTexTableEntryAt(21, 0x26);
                FUN_002bdf94(0, entry->x + x, entry->y + y, 1, 2, 36, levelText);
            }

            /* the icons of up to six ailments */
            count = 0;
            for (s32 ailment = 1; ailment < 11; ailment++) {
                if (partyMemberAilments(scene, member) & (1 << ailment)) {
                    bool shown = true;
                    if (ailment == 4) {
                        if (scene->ailmentIconShown[member] == 0) {
                            shown = false;
                        }
                        entry = asdTMTexTableEntryAt(21, 0x27 + count * 2);
                        scene->ailmentIconX[member] = entry->x + x;
                        scene->ailmentIconY[member] = entry->y + y;
                    }
                    if (shown) {
                        entry = asdTMTexTableEntryAt(21, 0x28 + count * 2);
                        FUN_00288844(entry->x + x, entry->y + y, 36);
                        entry = asdTMTexTableEntryAt(21, 0x27 + count * 2);
                        messageKindForward((s16)ailment, entry->x + x, entry->y + y, 36);
                    }
                    count++;
                    if (count >= 6) {
                        break;
                    }
                }
            }
            hudSetScissor(0);
            gxResetColorQuadToWhite();
        }

        if (scene->slideShown[member] != 0) {
            s32 fade = scene->slideTimers[member] - 29;
            if ((u32)fade < 12) {
                alpha = fade / 12.0f;
                efctSetSpeed(alpha);
                entry = asdTMTexTableEntryAt(21, member + 0x52);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                texDrawTableEntryAtStoredOrigin(2, 21, 0x4F, entry->x, entry->y, 46);
                texDrawTableEntryAtStoredOrigin(2, 21, 0x4E, entry->x, entry->y - shift, 46);
                hudSetScissor(3);
                gxSetMirroredClippedScissor(entry->x, entry->y, entry->placement->width, entry->placement->height - shift, 1);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                texDrawTableEntryAtStoredOrigin(2, 21, 0x50, entry->x, entry->y, 46);
                texDrawTableEntryAtStoredOrigin(2, 21, 0x51, entry->x, entry->y, 46);
                hudSetScissor(0);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
            }
        }
        efctSetSpeed(1.0f);
    }

    if (scene->state == 0x1F || scene->mode == 0x1F) {
        efctSetSpeed(vec2GetSpeed(&scene->blockE));
        texDrawTableEntryAtStoredOrigin(2, 14, 0x106, 0, 0, 51);
        efctSetSpeed(alpha);
    }

    GameOptions *guest = (GameOptions *)gameGetSupportUnitData();
    if (guest->unk46 != 0 && (btlGetMainState()->battleFlags & 0x40000) == 0) {
        s32 shakeX;
        s32 shakeY;
        s32 shake = scene->party.shakeTimers[4];
        if (shake > 0) {
            f32 amplitude = scene->party.shakeAmplitudes[4] * 0.5f;
            if (shake & 1) {
                amplitude = -amplitude;
            }
            shakeY = shakeX = (s32)amplitude;
            scene->party.shakeAmplitudes[4] =
                shakeAmplitude(shake);
        } else {
            shakeY = shakeX = 0;
        }
        alpha = 1.0f;
        if (allLit == 0 && scene->unk305C != 4) {
            alpha = 0.5f;
        }
        if (dimGuest != 0) {
            alpha = 0.5f;
        }
        efctSetSpeed(alpha);
        TextureTableEntryIV *entry;
        if (expanded != 0) {
            entry = asdTMTexTableEntryAt(21, 0x71);
        } else {
            entry = asdTMTexTableEntryAt(21, 0x70);
        }
        s32 x;
        s32 y;
        if (btlActorIsDown(scene->guestActor) != 0 && FUN_002b6ad0() != 0) {
            x = vec2GetXInt(&scene->timerC) + shakeX + entry->x;
            y = vec2GetYInt(&scene->timerC) + shakeY + entry->y;
        } else {
            x = vec2GetXInt(&scene->memberFrames[1]) + shakeX + entry->x;
            y = vec2GetYInt(&scene->memberFrames[1]) + shakeY + entry->y;
        }
        x = vec2GetXInt(&scene->timer) + x;
        y = vec2GetYInt(&scene->timer) + y;
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
        s32 top = y - shift;
        texDrawTableEntryAtStoredOrigin(2, 21, 0x5E, x, top, 56);
        if (scene->state == 0x1F || scene->mode == 0x1F) {
            efctSetSpeed(vec2GetSpeed(&scene->blockE));
            texDrawTableEntryAtStoredOrigin(2, 21, 0x5E, x, top, 56);
            efctSetSpeed(alpha);
        }
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
        texDrawTableEntryAtStoredOrigin(2, 21, 0x5F, x, top, 61);
        texDrawTableEntryAtStoredOrigin(2, 21, 0x60, x, top, 61);
        texDrawTableEntryAtStoredOrigin(2, 21, 0x61, x, top, 61);
        texDrawTableEntryAtStoredOrigin(2, 21, 0x62, x, top, 61);
        texDrawTableEntryAtStoredOrigin(2, 21, 0x63, x, top, 61);
        texDrawTableEntryAtStoredOrigin(2, 21, 0x64, x, top, 66);
        texDrawTableEntryAtStoredOrigin(2, 21, 0x65, x, top, 66);

        maxHp = guest->guest.maxHp;
        s16 hp = scene->party.hpShown[4];
        s16 hpChange = 0;
        if (scene->party.gaugeAnimating[4] != 0) {
            if (scene->party.hpAnimationHeld[4] == 0) {
                hpChange = scene->party.hpAnimations[4];
            }
            if (scene->party.gaugeRising[4] == 0) {
                hpChange = -hpChange;
            }
        }
        ScreenPoint position = {x, top};
        FUN_002be90c(hp, maxHp, hpChange, scene->party.gaugeBases[4], 21, 0x66, 0x69, 0x68, 0x67, position, 71, 0);

        entry = asdTMTexTableEntryAt(21, 0x6F);
        if (FUN_002b6ad0() != 0) {
            if (guest->guest.ailments & 2) {
                drawSetColorFromRGBA8(categoryGetColor(1));
            }
            SupportUnitRecord *record = supportUnitGetEntry((s16)guest->unk604, guest->supportIndex);
            FUN_002b6940(record->demon.id, entry->x + x, entry->y + y - shift, 66);
            gxResetColorQuadToWhite();
            sprintf(name, FUN_002bcf4c(((GameOptions *)gameGetSupportUnitData())->unk604)->name);
        } else {
            if (guest->guest.ailments & 2) {
                drawSetColorFromRGBA8(categoryGetColor(1));
            }
            uiDrawDemonIcon((s16)guest->unk46, entry->x + x, entry->y + y - shift, 66, 0);
            gxResetColorQuadToWhite();
            sprintf(name, FUN_002bd068(guest->unk46));
        }
        entry = asdTMTexTableEntryAt(21, 0x6E);
        textDrawString(entry->x + x, entry->y + y - shift, 0.72265625f, 2, 0.0f, 0xFF, alpha, name);

        if (FUN_002b6ad0() != 0 && (scene->state == 0x1F || scene->mode == 0x1F)) {
            if (scene->unk3081 != 0) {
                if (alpha >= 1.0f) {
                    efctSetSpeed(vec2GetSpeed(&scene->intro.animation));
                }
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                texDrawCompositeSprite(2, 21, 12, 0, 0, 91);
                renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
                efctSetSpeed(1.0f);
            } else {
                alpha = vec2GetSpeed(&scene->blockE);
                if (alpha > 0.0f) {
                    efctSetSpeed(alpha);
                    s32 flashX = vec2GetXInt(&scene->blockE);
                    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                    texDrawTableEntryAtStoredOrigin(2, 21, 0x1B4, flashX, 0, 81);
                    texDrawTableEntryAtStoredOrigin(2, 21, 0x1B4, flashX, 0, 81);
                    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
                    entry = asdTMTexTableEntryAt(21, 0x1B9);
                    hudSetScissor(3);
                    gxSetMirroredClippedScissor(entry->x + flashX, entry->y, entry->placement->width, entry->placement->height, 1);
                    entry = asdTMTexTableEntryAt(21, 0x1BA);
                    u16 index = ((GameOptions *)gameGetSupportUnitData())->supportIndex;
                    SupportUnitRecord *record =
                        supportUnitGetEntry((s16)((GameOptions *)gameGetSupportUnitData())->unk604, index);
                    textureLoadOptionalDemonModel((s16)(record->demon.id + 1), entry->x + flashX, entry->y, 84, 0);
                    hudSetScissor(0);
                    texDrawCompositeSprite(2, 21, 10, flashX, 0, 86);
                    if (alpha >= 1.0f) {
                        efctSetSpeed(vec2GetSpeed(&scene->intro.animation));
                    }
                    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
                    texDrawCompositeSprite(2, 21, 12, 0, 0, 91);
                    texDrawCompositeSprite(2, 21, 11, flashX, 0, 91);
                    renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
                    efctSetSpeed(1.0f);
                }
            }
        }
        efctSetSpeed(1.0f);
    }

    /* the elements' markers */
    s32 elementIcons[5] = {0x46, 0x47, 0x48, 0x49, 0x71};
    for (s32 element = 0; element < 5; element++) {
        if (scene->party.elementShown[element] != 0) {
            TextureTableEntryIV *entry = asdTMTexTableEntryAt(21, elementIcons[element]);
            renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
            drawSetColorFromRGBA8(FUN_0025765c(scene->party.elements[element], scene->party.elementPhases[element]));
            s32 image = 2000;
            if (element == 4) {
                image = 2001;
            }
            hudSetScissor(3);
            s32 height = entry->placement->height;
            gxSetMirroredClippedScissor(entry->x, entry->y, entry->placement->width, expanded != 0 ? height - shift : height - 40, 1);
            texDrawTableEntryAtStoredOrigin(2, 21, image, entry->x, entry->y, 231);
            hudSetScissor(0);
            gxResetColorQuadToWhite();
            renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
        }
    }
}

} /* extern "C" */
