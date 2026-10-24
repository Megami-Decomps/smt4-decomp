/* NON_MATCHING: retail copies b to r2 first (mov r2, r1; smull r0, r1, r2, r0) to keep RdHi distinct from Rm; armcc builds smull r0, r1, r1, r0 (pre-v6 cpus give a different register shuffle) */
/* Signed 32x32 -> 64-bit multiply. */
extern "C" long long FUN_0050d6d8(int a, int b)
{
    return (long long)b * (long long)a;
}
