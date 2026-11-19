# Documentation

- [Contribution guide](CONTRIBUTING.md): the workflow for one function, the matching rules a review
  checks, and the review checklist.
- [Matching guide](matching-guide.md): reading a diff (`fdiff`, `trial`, `--shape`), starting from a
  look-alike, the armcc 4.1 cookbook of source shapes that turned near misses into matches, sweeps
  (parameter order, publish-first allocation), and the compiler flags with the evidence each needs.
- [Style and naming](style-and-naming.md): one struct per object, the headers that own shared types
  and contracts, the readability standard, consistency rules (casts, inline helpers, comments,
  constants), C++ classes and naming.
- [Troubleshooting](troubleshooting.md): Windows, wibo and Wine, path length, the known host
  failures, and what to do when objdiff, `fdiff` and relink disagree.
- [Project layout, names and provenance](project.md): the pipeline, a tools cheat sheet, what each
  directory and tool holds, how the two games share code, where names and source-file placements
  come from, and what counts as proven.
- Per game: [smt4](../smt4/README.md) and [smt4a](../smt4a/README.md) describe each project's dump,
  build commands, configuration files and tools.
- [Notes](notes/README.md): the retail evidence behind individual matches whose fix changed a shared
  contract, a header or the configuration (an inlined helper, a corrected argument list, a data table).
