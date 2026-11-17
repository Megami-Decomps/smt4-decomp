# Battle resident-resource loader

IV `btlAdvanceResidentResourceLoad` (`00339B64`) is the battle worker's
lock-protected resource initialization state machine. It copies the resident
message/table/script handles, creates their script process, waits for the other
resident resources, and publishes completion after advancing the final step.

The script factory takes `(script, commandOwner)`. Its canonical declaration in
`script/scrScriptProcess.h` and its definition agree: the second argument becomes
`ScriptProcess::commandOwner`. Retail retains the copied legion message pointer
in `r1` while copying the table through `r2`, then supplies the script in `r0`.
The previous no-argument local declaration lost this contract; its apparent
copy-register mismatch was not arbitrary register allocation.

The terminal step advances before setting the completion bit. This agrees with
the native store order, with the battle main-process consumer that starts the
next job after seeing completion, and independently with Apocalypse's
`003F0794` terminal step. No volatile fields or compiler options are needed.

The canonical `BtlMainState` now names the resident resource fields at
`2230..2254` and loader flags/step/lock at `49FC/49FE/4A00`. These are views of
existing opaque storage. All prior members, offsets, and the `4A58` total size
are preserved. The worker retains the actual `void (*)(void *)` thread-entry
signature and casts its argument once to the state owner.

Apocalypse's corresponding loader remains unmatched: its observed difference is
in one resource-store argument sequence, not the missing script factory contract
fixed here. It is not included in this match.

Verification: all 604 raw text/pool bytes and normalized relocations match.
All 765 previously proven transitive consumers of the changed battle header
remain identical. The thread-launch caller's bytes and relocations are unchanged.
Both stock relinks are byte-identical to retail, with 6388 IV and 9236 Apocalypse
functions proven and none lost. Local full builds retain the same three known
host failures per game (wibo teardown and overlong STL filenames); native CI is
the complete-build gate.
