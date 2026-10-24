/* Runs FUN_0011817c (placed right after, so the call is a linker NOP) with no arguments. */
extern "C" {
void FUN_0011817c(int, int);

void FUN_00118170(void)
{
    FUN_0011817c(0, 0);
}
}
