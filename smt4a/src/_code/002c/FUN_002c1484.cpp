#include "common.h"

extern "C" {

int FUN_002c2138(void);
int FUN_002deb84(void);
int FUN_0031cb24(int obj);
int FUN_0031cb5c(void);
int FUN_0039b8ac(void);

/* Script command: returns 1 when it handled the request (via FUN_0039b8ac or no pending object), 0 otherwise. */
bool FUN_002c1484(void)
{
    if (FUN_002deb84() != 0) {
        if (FUN_002c2138() != 0) {
            FUN_0039b8ac();
            return true;
        }
        return false;
    }
    int obj = FUN_0031cb5c();

    if (obj != 0) {
        FUN_0031cb24(obj);
        return false;
    }
    return true;
}

} /* extern "C" */
