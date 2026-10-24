/* Runs FUN_00151118 (placed right after, so the call is a linker NOP) with no arguments. */
extern "C" {
void FUN_00151118(int, int);

void FUN_0015110c(void)
{
    FUN_00151118(0, 0);
}
}
