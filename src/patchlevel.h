#ifndef PATCHLEVEL_H__
#define PATCHLEVEL_H__ 1

/*--------------------------------------------------------------------------
 * Various version numbers and strings, collected here so that PRCS has
 * to change only one file.
 *--------------------------------------------------------------------------
 */

/* $Format: "#define IS_STABLE_BRANCH ($ReleaseMinor$ % 2 == 0)"$ */
#define IS_STABLE_BRANCH (3 % 2 == 0)

#define IS_DEV_BRANCH    (!IS_STABLE_BRANCH)

/* $Format: "#define IS_DEVELOPMENT (!strcmp(\"$ReleaseType$\", \"dev\"))"$ */
#define IS_DEVELOPMENT (!strcmp("dev", "dev"))

/* $Format: "#define IS_MAINTENANCE (!strcmp(\"$ReleaseType$\", \"maint\"))"$ */
#define IS_MAINTENANCE (!strcmp("dev", "maint"))

/* $Format: "#define RELEASE_TYPE \"$ReleaseType$\""$ */
#define RELEASE_TYPE "dev"

/* $Format: "#define RELEASE_DATE \"$ProjectDate$\""$ */
#define RELEASE_DATE "Sun, 19 Jun 2005 23:09:27 -0600"

/* $Format: "#define PROJ_VERSION \"$ProjectVersion$\""$ */
#define PROJ_VERSION "3-3.708"

/* $Format: "#define DRIVER_VERSION \"$ReleaseVersion$\""$ */
#define DRIVER_VERSION "3.3.708"

/* $Format: "#define VERSION_MAJOR \"$ReleaseMajor$\""$ */
#define VERSION_MAJOR "3"

/* $Format: "#define VERSION_MINOR \"$ReleaseMinor$\""$ */
#define VERSION_MINOR "3"

/* $Format: "#define VERSION_MICRO \"$ReleaseMicro$\""$ */
#define VERSION_MICRO "708"

/* $Format: "#define LOCAL_LEVEL \"\""$ */
#define LOCAL_LEVEL ""

/* TODO: Add something like the perl local patchlevel management. */
/* TODO: Add LPC defines for the various version number parts */

#endif /* PATCHLEVEL_H__ */

