/* The Apocalypse script message commands that switch to their bust-up form (smt4a scrCommMessageShowBustupWait and
 * scrCommMessageShowBustupStop both test the same argument pairs). */
#ifndef SCRIPT_SCRIPTMESSAGEBUSTUP_H
#define SCRIPT_SCRIPTMESSAGEBUSTUP_H

#include "common.h"

/* Whether a message command's arguments (argument 0 `command`, argument 1 `target`) select the bust-up
 * form: `target` 13 with one of fifteen command values. */
static __inline bool scrIsBustupMessageCommand(s32 command, s32 target)
{
    if (target != 13)
        return false;
    switch (command) {
    case 1:
    case 2:
    case 3:
    case 6:
    case 7:
    case 8:
    case 10:
    case 11:
    case 15:
    case 18:
    case 25:
    case 40:
    case 42:
    case 71:
    case 73:
        return true;
    }
    return false;
}

#endif
