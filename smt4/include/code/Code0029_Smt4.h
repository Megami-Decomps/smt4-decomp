#pragma once
#include "common.h"

/* Functions in the 0x00290000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Table21Entry;
struct Obj;
struct BattleCommandMenu;
struct MessageOwner;
struct PlayScene;
struct TextRenderer;
struct ScriptFile;
struct ScriptProcessWork;
extern "C" {

Table21Entry * FUN_00292844(u32 id);

void FUN_00292be4(Obj *obj, u32 a, u32 b);

u32 FUN_00297ca4(BattleCommandMenu *menu, s32 confirm);

void FUN_00295214(u8 value);

void FUN_0029c4e4(u32 value, int copy);

void FUN_00292bcc(Obj *obj, u32 value);

void FUN_0029c424(u8 value);

u8 FUN_002954bc(Obj *obj);

void messageOwnerSetState(MessageOwner *owner, s32 state);

u32 messageBannerInitSelection(u8 mode, s32 useCurrentValue);

void infoWinStartTimer(void);

void FUN_00297b94(PlayScene *scene, s32 selection, s32 page);

u32 FUN_00298e00(u32 id);

u8 FUN_0029563c(void);

void debugDrawText(TextRenderer* renderer, const char* text, f32 x, f32 y, f32 alpha);

u32 FUN_00299fc0(void);

u32 FUN_00294fe0(Obj *obj);

u8 useCounterIsFinished(void);


u8 playerPadTestBit(u32 bit);

} /* extern "C" */
