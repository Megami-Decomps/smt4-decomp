#ifndef CLASSES_OBJ5333C0_H
#define CLASSES_OBJ5333C0_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

class Obj5333c0;

/* A step function of the scene: a member-function pointer (function address and `this` adjustment). */
typedef void (Obj5333c0::*SceneStep)();

/* The model of the scene's camera transform; the node holds its named joints. */
struct SceneTransformModel {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ AsdMdlNode *node;
};

/* The transform the scene's camera follows (observed prefix). */
struct SceneTransform {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ SceneTransformModel *model;
};

/* A quest NPC's controller; `model` is what controllerSetDestination moves. */
struct SceneNpcController {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *model;
};

extern "C" void FUN_0046ba10(Obj5333c0 *scene);

/* A scene whose step functions are listed in the table at 0x5333c0 (named after it until its real
 * name is known): the table holds member-function pointers, not a vtable. */
class Obj5333c0 {
public:
    /* Once the transition (screenFadeIsBusy) is over, moves to state 5 when the mode byte is 1,
     * otherwise to state 4. */
    void chooseNextState();

    /* State 1 of the healing counter: plays the healing talk, offers the choice, takes the fee and
     * records which kind of healing was received. */
    void healingStep();

    /* Final state of the table: raises the first flag bit and moves to state 19. */
    void finishScene();

    /* Runs the step function of the current state, then keeps the camera transform following the
     * scene and, the first time through, points each quest NPC's controllers at its dummy marker. */
    void update();

    friend void FUN_0046ba10(Obj5333c0 *scene);

protected:
    /* Switches to `next` and restarts the substate. */
    void startState(s32 next)
    {
        state = next;
        substate = 0;
    }

    /* 0x00 */ u32 flags;
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 substate;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ s8 kind;
    /* 0x11 */ u8 mode;
    /* 0x12 */ u8 unk12[8];
    /* 0x1A */ u8 frozen;                       /* nonzero: the camera transform and the NPC placement are held */
    /* 0x1B */ u8 unk1b[0x299];
    /* 0x2B4 */ u32 *script;
    /* 0x2B8 */ SceneStep steps[20]; /* step function of each state; slot 0 and 19 stay empty */
    /* 0x358 */ u8 unk358[0x6B8];
    /* 0xA10 */ SceneNpcController *npcControllersA[9];
    /* 0xA34 */ SceneNpcController *npcControllersB[9];
    /* 0xA58 */ u8 npcsPlaced;                  /* the NPC controllers were sent to their dummy markers */
    /* 0xA59 */ u8 unkA59[0x63];
    /* 0xABC */ s32 npcCount;
    /* 0xAC0 */ u8 unkAC0[0x21C];
    /* 0xCDC */ SceneTransform *transform;
    /* 0xCE0 */ u32 transformWanted;
    /* 0xCE4 */ u32 transformCurrent;
};

#endif
