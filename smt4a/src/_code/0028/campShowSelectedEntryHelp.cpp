#include "camp/CampStateA.h"




extern "C" {

s32 resourceRunOperationIfUnblocked(GridNavigation *page);
s32 listCursorGetRowIfUnblocked(GridNavigation *page);
void screenShowMessage(s32 id);
void skillHelpUpdateAttributeAndTarget(s32 id);

/* Shows the help message of the selected entry on the camp menu page `page`. */
void campShowSelectedEntryHelp(s32 page)
{
    CampStateA *camp = g_camp;
    switch (page) {
    case 0:
    case 10:
        break;
    case 9:
        skillHelpUpdateAttributeAndTarget(camp->entries[resourceRunOperationIfUnblocked(&camp->grids[3]) + listCursorGetRowIfUnblocked(&camp->grids[3])].id);
        break;
    case 0xb:
        screenShowMessage(camp->gridIds0[resourceRunOperationIfUnblocked(&camp->grids[0]) + listCursorGetRowIfUnblocked(&camp->grids[0])]);
        break;
    case 0xd:
        screenShowMessage(camp->gridIds1[resourceRunOperationIfUnblocked(&camp->grids[1]) + listCursorGetRowIfUnblocked(&camp->grids[1])]);
        break;
    case 0xe:
        screenShowMessage(camp->gridIds2[resourceRunOperationIfUnblocked(&camp->grids[2]) + listCursorGetRowIfUnblocked(&camp->grids[2])]);
        break;
    case 0x13:
    case 0x48:
        screenShowMessage(camp->meleeIds[resourceRunOperationIfUnblocked(&camp->grids[5]) + listCursorGetRowIfUnblocked(&camp->grids[5])]);
        break;
    case 0x14:
    case 0x49:
        screenShowMessage(camp->rangedIds[resourceRunOperationIfUnblocked(&camp->grids[6]) + listCursorGetRowIfUnblocked(&camp->grids[6])]);
        break;
    case 0x15:
    case 0x4a:
        screenShowMessage(camp->ammunitionIds[resourceRunOperationIfUnblocked(&camp->grids[7]) + listCursorGetRowIfUnblocked(&camp->grids[7])]);
        break;
    case 0x16:
    case 0x4b:
        screenShowMessage(camp->headIds[resourceRunOperationIfUnblocked(&camp->grids[8]) + listCursorGetRowIfUnblocked(&camp->grids[8])]);
        break;
    case 0x17:
    case 0x4c:
        screenShowMessage(camp->bodyIds[resourceRunOperationIfUnblocked(&camp->grids[9]) + listCursorGetRowIfUnblocked(&camp->grids[9])]);
        break;
    case 0x18:
    case 0x4d:
        screenShowMessage(camp->legsIds[resourceRunOperationIfUnblocked(&camp->grids[10]) + listCursorGetRowIfUnblocked(&camp->grids[10])]);
        break;
    case 0x19:
    case 0x4e:
        screenShowMessage(camp->accessoryIds[resourceRunOperationIfUnblocked(&camp->grids[11]) + listCursorGetRowIfUnblocked(&camp->grids[11])]);
        break;
    }
}
}
