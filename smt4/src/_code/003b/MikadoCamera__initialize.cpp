/* NON_MATCHING: zero/-1 lifetimes differ; retail passes an uninitialized r6 as an extra allocation operand, while the recovered allocation overload takes only size. */
#include "mikado/mikadoMain.h"
#include "bible/bibleLegionDraw.h"
struct ContentTransition;
struct Mover;

extern "C" {
extern const char g_mikadoTalkBfPath[];    /* g_mikadoTalkBfPath */
extern const char g_mikadoTalkMbmPath[];   /* g_mikadoTalkMbmPath */
extern const char g_mikadoCheckBfPath[];   /* g_mikadoCheckBfPath */
extern const char g_mikadoCheckMbmPath[];  /* g_mikadoCheckMbmPath */
void FUN_003bb0ac(ContentTransition *transition);
void FUN_003bb1f0(SelectionFlags *panel);
void asdTMTexTableLoadTmx(u32 kind, u32 arg);
void FUN_002898e4(void);
void FUN_00289880(void);
void buttonHelpAcquireResources(void);
void buttonHelpCreate(void);
void FUN_00240cec(s32 arg);
void spriteTable2aLoad(SelectionFlags *panel);
void asdLoadFileAsyncSimple(const char *path, u32 *dest, s32 arg);
void FUN_00282bfc(s32 slot, u32 value);
void FUN_00235250(Mover *mover);
void FUN_002637c8(void);
}

void MikadoCamera::initialize()
{
    ready = 0;
    flags = 0;
    FUN_003bb0ac(reinterpret_cast<ContentTransition *>(this));
    FUN_003bb1f0(&selectionFlags);
    unk34 = -1;
    asdTMTexTableLoadTmx(0x21, 0);
    FUN_002898e4();
    FUN_00289880();
    buttonHelpAcquireResources();
    buttonHelpCreate();
    FUN_00240cec(0);
    FUN_003bbaf4(&unkD58);
    spriteTable2aLoad(&selectionFlags);
    asdLoadFileAsyncSimple(g_mikadoTalkBfPath, &talkBf, 0);
    asdLoadFileAsyncSimple(g_mikadoTalkMbmPath, &talkMbm, 0);
    asdLoadFileAsyncSimple(g_mikadoCheckBfPath, &checkBf, 0);
    asdLoadFileAsyncSimple(g_mikadoCheckMbmPath, &checkMbm, 0);
    state = 1;
    unk2C = 0;
    unkD74 = 0;
    unkD6C = 0;
    unkD70 = 0;
    talkBf = 0;
    talkMbm = 0;
    unkD84 = 0;
    unkD5C = 0;
    unk58 = 0.0f;
    unk5C = 0.0f;
    unk4C = 0xFFFF;
    unk4E = 0;
    unkDB0 = 0;
    unk48[0] = 0;
    unk48[1] = 0;
    unk48[2] = 0;
    unk48[3] = 0;
    FUN_00282bfc(0, 0xFF);
    FUN_00282bfc(1, 0xFF);
    talkWork = new MikadoTalkWork;
    FUN_00235250(reinterpret_cast<Mover *>(talkWork));
    FUN_002637c8();
}
