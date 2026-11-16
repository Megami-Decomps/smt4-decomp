/* Runs titleDbgBgCreate (placed right after, so the call is a linker NOP) with no arguments. */
extern "C" {
void titleDbgBgCreate(int, int);

void FUN_00118170(void)
{
    titleDbgBgCreate(0, 0);
}
}
