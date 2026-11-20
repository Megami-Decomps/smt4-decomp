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

u32 btlTalkGetPortraitCode(void);

void commonBgStopChildAndBeginTransition(void);

void FUN_0028cf30(PlayScene *scene, int value, int flag);



void FUN_0028d664(ScriptHelpOwner *owner, u8 mode);

s32 widgetGetVisibleLength(Widget *widget);

void playerCollectPassiveSkillBits(Dest *dest, int withSource);

s32 FUN_0028299c(Owner *owner);

void FUN_00287188(CampScreen *screen);

s32 FUN_0028dbe0(Selector *selector);

} /* extern "C" */
