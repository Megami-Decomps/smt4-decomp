/* Forwards to FUN_002b39f0, which is placed right after it (the call is a linker NOP). */
extern "C" {
void FUN_002b39f0(void);

void FUN_002b39ec(void)
{
    FUN_002b39f0();
}
}
