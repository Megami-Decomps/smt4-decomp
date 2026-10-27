#include "classes/Obj536044.h"

void Obj536044::resetHandlers()
{
    for (s32 i = 0; i < 22; ++i) {
        states[i] = NULL;
        exitStates[i] = NULL;
    }
    states[0] = &Obj536044::FUN_0049569c;
    states[1] = &Obj536044::FUN_00494a34;
    states[2] = &Obj536044::enterState3;
    states[3] = &Obj536044::FUN_00498ac0;
    states[4] = &Obj536044::waitController;
    states[5] = &Obj536044::FUN_004995b0;
    states[6] = &Obj536044::FUN_00494740;
    states[7] = &Obj536044::FUN_0049bd20;
    states[8] = &Obj536044::itemMenuHandleSelectionInput;
    states[9] = &Obj536044::FUN_00499fdc;
    states[10] = &Obj536044::FUN_0049a2b4;
    states[11] = &Obj536044::FUN_0049b00c;
    states[12] = &Obj536044::FUN_0049b00c;
    states[13] = &Obj536044::FUN_0049b00c;
    states[14] = &Obj536044::shopUpdateCharonRequestTransition;
    states[20] = &Obj536044::FUN_00497044;
    states[15] = &Obj536044::FUN_004969a8;
    states[16] = &Obj536044::panelUpdatePageExitTransition;
    states[17] = &Obj536044::FUN_00497290;
    states[18] = &Obj536044::FUN_00498594;
    states[19] = &Obj536044::FUN_00495584;
}
