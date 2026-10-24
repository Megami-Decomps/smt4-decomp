/* NON_MATCHING: every store and the Obj4207d0 effect creation match; retail reloads scene->unk01C for the two copied floats (armcc forwards the constant instead) and materialises the float constants in a different register order. The effect-state global is still named by its retail address (DAT_0049f91c base). */
#include "classes/Obj4207d0.h"
#include "map/lmapMain.h"

/* The scene block as the map initialiser fills it in (Shin Megami Tensei IV layout); only the
 * words it writes are named. */
struct LmapSceneInitView {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u32 unk008;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u8 unk010;
    /* 0x011 */ u8 unk011[3];
    /* 0x014 */ f32 unk014;
    /* 0x018 */ u8 unk018[4];
    /* 0x01C */ f32 unk01C;
    /* 0x020 */ f32 unk020;
    /* 0x024 */ f32 unk024;
    /* 0x028 */ f32 unk028;
    /* 0x02C */ f32 unk02C;
    /* 0x030 */ f32 unk030;
    /* 0x034 */ u8 unk034[0xC];
    /* 0x040 */ f32 unk040;
    /* 0x044 */ f32 unk044;
    /* 0x048 */ f32 unk048;
    /* 0x04C */ f32 unk04C;
    /* 0x050 */ f32 unk050;
    /* 0x054 */ u32 unk054;
    /* 0x058 */ f32 unk058;
    /* 0x05C */ u8 unk05C;
    /* 0x05D */ u8 unk05D[3];
    /* 0x060 */ u32 unk060;
    /* 0x064 */ u8 unk064[4];
    /* 0x068 */ f32 unk068;
    /* 0x06C */ u8 unk06C;
    /* 0x06D */ u8 unk06D[3];
    /* 0x070 */ u32 unk070;
    /* 0x074 */ f32 unk074;
    /* 0x078 */ f32 unk078;
    /* 0x07C */ f32 unk07C;
    /* 0x080 */ f32 unk080;
    /* 0x084 */ u32 unk084;
    /* 0x088 */ u8 unk088;
    /* 0x089 */ u8 unk089[7];
    /* 0x090 */ u32 unk090;
    /* 0x094 */ f32 unk094;
    /* 0x098 */ u8 unk098[0x9C];
    /* 0x134 */ u8 unk134;
    /* 0x135 */ u8 unk135[0x27];
    /* 0x15C */ f32 unk15C;
    /* 0x160 */ f32 unk160;
    /* 0x164 */ u32 unk164;
    /* 0x168 */ u8 unk168[8];
    /* 0x170 */ u32 unk170;
    /* 0x174 */ u32 unk174;
    /* 0x178 */ u32 unk178;
    /* 0x17C */ u32 unk17C;
    /* 0x180 */ u8 unk180[5];
    /* 0x185 */ u8 unk185[3];
    /* 0x188 */ u32 unk188;
    /* 0x18C */ s32 unk18C;
    /* 0x190 */ u32 unk190;
    /* 0x194 */ Obj4207d0 *effect;
    /* 0x198 */ u8 unk198;
    /* 0x199 */ u8 unk199[3];
    /* 0x19C */ u32 unk19C;
    /* 0x1A0 */ u32 unk1A0;
    /* 0x1A4 */ u32 unk1A4;
    /* 0x1A8 */ u32 unk1A8;
    /* 0x1AC */ u32 unk1AC;
    /* 0x1B0 */ u32 unk1B0;
    /* 0x1B4 */ u16 unk1B4;
    /* 0x1B6 */ u16 unk1B6;
    /* 0x1B8 */ u16 unk1B8;
};

/* The map effect state kept beside the scene. */
struct LmapEffectState {
    /* 0x17C */ u8 unk17C;
    /* 0x17D */ u8 unk17D[3];
    /* 0x180 */ f32 unk180;
    /* 0x184 */ f32 unk184;
    /* 0x188 */ f32 unk188;
    /* 0x18C */ f32 unk18C;
    /* 0x190 */ u8 unk190[0x24];
    /* 0x1B4 */ u16 unk1B4;
};

extern "C" {
extern LmapSceneInitView *g_lmapScene;
extern LmapEffectState DAT_0049f91c;

/* Resets the map scene to its defaults and creates its effect object. */
void FUN_001b4764(void)
{
    LmapSceneInitView *scene = g_lmapScene;

    scene->unk000 = 0;
    scene->unk004 = 0;
    scene->unk008 = 0;
    scene->unk010 = 0;
    scene->unk014 = 0.0f;
    scene->unk01C = 10.0f;
    scene->unk020 = 0.0f;
    scene->unk024 = 10.0f;
    scene->unk028 = scene->unk01C;
    scene->unk02C = 0.0f;
    scene->unk030 = 10.0f;
    scene->unk040 = scene->unk01C;
    scene->unk044 = 0.0f;
    scene->unk048 = 10.0f;
    scene->unk04C = -90.0f;
    scene->unk050 = -90.0f;
    scene->unk068 = 0.0f;
    scene->unk06C = 0;
    scene->unk054 = 0;
    scene->unk058 = 5.0f;
    scene->unk05C = 0;
    scene->unk060 = 0;
    scene->unk070 = 0;
    scene->unk074 = 0.0f;
    scene->unk078 = 0.0f;
    scene->unk07C = 0.0f;
    scene->unk080 = 0.0f;
    scene->unk084 = 0;
    scene->unk088 = 0;
    scene->unk090 = 0;
    scene->unk094 = 0.0f;
    scene->unk15C = 100.0f;
    scene->unk160 = 1000.0f;
    scene->unk134 = 1;
    Obj4207d0 *effect = new Obj4207d0;
    scene = g_lmapScene;
    scene->effect = effect;
    scene->unk198 = 0;
    scene->unk19C = 0;
    scene->unk1A0 = 0;
    scene->unk1A4 = 0;
    scene->unk1A8 = 0;
    scene->unk1AC = 0;
    scene->unk1B0 = 0;
    scene->unk1B4 = 0;
    scene->unk1B6 = 0;
    scene->unk1B8 = 0;
    scene->unk164 = 0;
    scene->unk188 = 0;
    scene->unk174 = 0;
    scene->unk178 = 0;
    scene->unk17C = 0;
    scene->unk180[0] = 0;
    scene->unk180[1] = 0;
    scene->unk180[2] = 0;
    scene->unk180[3] = 0;
    scene->unk180[4] = 0;
    scene->unk18C = -1;
    scene->unk170 = 0;
    scene->unk190 = 0;
    DAT_0049f91c.unk17C = 0;
    DAT_0049f91c.unk180 = 0.0f;
    DAT_0049f91c.unk184 = 0.0f;
    DAT_0049f91c.unk188 = 0.0f;
    DAT_0049f91c.unk18C = 0.0f;
}

} /* extern "C" */
