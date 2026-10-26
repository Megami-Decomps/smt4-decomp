#pragma once
#include "common.h"

/* Functions in the 0x00280000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct PlayScene;
struct Obj;
struct ScriptHelpOwner;
struct Widget;
struct Dest;
struct Owner;
struct CampScreen;
struct Selector;
extern "C" {

void FUN_0028784c(int index, char value);

u32 FUN_0028660c(void);

void FUN_00289880(void);

void FUN_0028cf30(PlayScene *scene, int value, int flag);

void FUN_002895a8(Obj *obj);

void FUN_0028d664(ScriptHelpOwner *owner, u8 mode);

s32 FUN_0028cfbc(Widget *widget);

void FUN_00283f30(Dest *dest, int withSource);

u32 FUN_002886c8(void);

s32 FUN_0028299c(Owner *owner);

void FUN_00287188(CampScreen *screen);

s32 FUN_0028dbe0(Selector *selector);

} /* extern "C" */
