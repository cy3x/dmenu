/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* -b option; if 0, dmenu appears at bottom */
static int topbar = 1;

/* -z option; if 0, dmenu doesn't use fuzzy matching */
static int fuzzy = 0;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "Terminus:size=11", "Siji:size=11" };

/* -p option; prompt to the left of input field */
static const char *prompt = NULL;

static const char *colors[SchemeLast][2] = {
	/*                fg         bg      */
	[SchemeNorm] = { "#9aa4bd", "#1b202a" },
	[SchemeSel]  = { "#1b202a", "#b15e7c" },
	[SchemeOut]  = { "#1b202a", "#b15e7c" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
