/* NON_MATCHING: the zero-based 24-entry jump table now matches (labels 0..8 are explicit); the u16 list loads still fold the low constant into the address add differently (retail keeps it in the LDRH offset). */
#include "camp/CampState.h"
#include <stddef.h>
#include "code/Code0029_VariantB.h"

extern "C" {
u32 resourceRunOperationIfUnblocked(const GridNavigation *grid);
void buttonHelpShowSkillDetails(u32 id);
void FUN_0029212c(u32 id);
u32 table8Type5GetValue(void);
void buttonHelpSetText(s32 mode, u32 color);

/* The index of the grid's highlighted entry. */
static __inline u32 selectedIndex(const GridNavigation *grid)
{
    u32 row = resourceRunOperationIfUnblocked(grid);
    return listCursorGetRowIfUnblocked(grid) + row;
}

/* Shows the help for the highlighted entry of the camp list identified by `list`. */
void FUN_00299900(u32 list)
{
    CampState *camp = g_camp;
    switch (list) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8:
        break;
    case 9:
        buttonHelpShowSkillDetails(camp->skills[selectedIndex(&camp->grids[3])].skill);
        break;
    case 10:
        if (camp->gridIds4[selectedIndex(&camp->grids[4])] != 0) {
            buttonHelpShowSkillDetails(table8Type5GetValue());
        } else {
            buttonHelpSetText(0, 0x323232FF);
        }
        break;
    case 11:
        FUN_0029212c(camp->gridIds0[selectedIndex(&camp->grids[0])]);
        break;
    case 12:
        FUN_0029212c(camp->gridIds1[selectedIndex(&camp->grids[1])]);
        break;
    case 13:
        FUN_0029212c(camp->gridIds2[selectedIndex(&camp->grids[2])]);
        break;
    case 17:
        FUN_0029212c(camp->meleeIds[selectedIndex(&camp->grids[5])]);
        break;
    case 18:
        FUN_0029212c(camp->rangedIds[selectedIndex(&camp->grids[6])]);
        break;
    case 19:
        FUN_0029212c(camp->ammunitionIds[selectedIndex(&camp->grids[7])]);
        break;
    case 20:
        FUN_0029212c(camp->headIds[selectedIndex(&camp->grids[8])]);
        break;
    case 21:
        FUN_0029212c(camp->bodyIds[selectedIndex(&camp->grids[9])]);
        break;
    case 22:
        FUN_0029212c(camp->legsIds[selectedIndex(&camp->grids[10])]);
        break;
    case 23:
        FUN_0029212c(camp->accessoryIds[selectedIndex(&camp->grids[11])]);
        break;
    }
}

} /* extern "C" */
