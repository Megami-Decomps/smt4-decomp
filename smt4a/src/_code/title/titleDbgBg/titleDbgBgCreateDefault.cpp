/* Runs titleDbgBgCreate (placed right after, so the call is a linker NOP) with no arguments. */
extern "C" {
void titleDbgBgCreate(int, int);

void titleDbgBgCreateDefault(void)
{
    titleDbgBgCreate(0, 0);
}
}
