#include "common.h"

extern "C" {

int FUN_0028975c(int a, u32 b, int c);
int FUN_002c09d0(int id);
extern int DAT_0043e360;
extern int FUN_002b8cec(u32 button);
extern int FUN_002bfde4(u32 mode);

/* Debug flag editor: moves the cursor DAT_0043e360 (0-0x7FF) by the pressed directions, toggles the flag, and reports whether mode 1 is active. */
u32 FUN_002d860c(void)
{
    u32 toggled;
    u32 result;
    int column;
    int row;
    int page;

    if ((FUN_002b8cec(3) != 0) || (FUN_002b8cec(0xc) != 0)) {
        DAT_0043e360 = DAT_0043e360 + 1;
    }
    if ((FUN_002b8cec(6) != 0) || (FUN_002b8cec(0xf) != 0)) {
        DAT_0043e360 = DAT_0043e360 + 0x10;
    }
    if ((FUN_002b8cec(4) != 0) || (FUN_002b8cec(0xd) != 0)) {
        DAT_0043e360 = DAT_0043e360 - 1;
    }
    if ((FUN_002b8cec(5) != 0) || (FUN_002b8cec(0xe) != 0)) {
        DAT_0043e360 = DAT_0043e360 - 0x10;
    }
    if (FUN_002b8cec(8) != 0) {
        DAT_0043e360 = DAT_0043e360 - 0x100;
    }
    if (FUN_002b8cec(7) != 0) {
        DAT_0043e360 = DAT_0043e360 + 0x100;
    }
    if (DAT_0043e360 >= 0x800) {
        DAT_0043e360 = DAT_0043e360 - 0x800;
    }
    if (DAT_0043e360 < 0) {
        DAT_0043e360 = DAT_0043e360 + 0x800;
    }
    if (FUN_002bfde4(0) != 0) {
        toggled = FUN_002c09d0(DAT_0043e360);
        FUN_0028975c(DAT_0043e360, toggled ^ 1, 1);
    }
    if (FUN_002bfde4(1) != 0) {
        result = 1;
    } else {
        row = 0;
        page = DAT_0043e360 / 0x100;
        do {
            column = 0;
            do {
                FUN_002c09d0(column + row * 0x10 + page * 0x100);
                column = column + 1;
            } while (column < 0x10);
            row = row + 1;
        } while (row < 0x10);
        result = 0;
    }
    return result;
}

} /* extern "C" */
