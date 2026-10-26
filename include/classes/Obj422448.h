#ifndef CLASSES_OBJ422448_H
#define CLASSES_OBJ422448_H

#include "classes/Obj42247c.h"

/* A compendium view (vtable at 0x422448, named after it until its real name is known) whose
 * constructor installs its state-handler tables. 0xA6F0 bytes. */
class Obj422448 : public Obj42247c {
public:
    Obj422448();
    virtual ~Obj422448();
    virtual void start();
    virtual void unk0c();
    virtual void stop();
    virtual void unk14();
    virtual void render();

    /* Collects the unlocked entries, picks the help line and opens the panel on them. */
    void buildList();

    typedef void (Obj422448::*Handler)();
    typedef s32 (Obj422448::*EnterHandler)();
    typedef void (Obj42247c::*LeaveHandler)();
    void FUN_003abad4();
    void bibleScreenStartScript();
    void FUN_003ab348();
    void FUN_003abed8();
    void menuUpdateCollectionSort();
    void FUN_003ab9a4();
    void itemMenuTakeSelected();
    void sceneScriptDoneSetState();
    void FUN_003ab128();
    void FUN_003ab7c8();
    void FUN_003ab948();

    /* 0x5A4 */ u8 unk5A4[0xA5B8 - 0x5A4];
    /* 0xA5B8 */ Handler handlers[13];
    /* 0xA620 */ EnterHandler enterHandlers[13];
    /* 0xA688 */ LeaveHandler leaveHandlers[13];
};

#endif
