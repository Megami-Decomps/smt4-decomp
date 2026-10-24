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

    /* 0x5A4 */ u8 unk5A4[0xA6F0 - 0x5A4];
};

#endif
