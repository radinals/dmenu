/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                               /* -b  option; if 0, dmenu appears at bottom     */
static const char *prompt  = NULL;                   /* -p  option; prompt to the left of input field */
static const char *fonts[] = {"monospace:size=10"};  /* -fn option overrides fonts[0]; */
                                                     /*  default X11 font or font set */
/* colors */
static const char color0[] = "#0c0d0e";
static const char color1[] = "#000000";
static const char color2[] = "#565656";
static const char color3[] = "#c19801";
static const char color4[] = "#191919";

static const char *colors[SchemeLast][2] = {
	/*                fg         bg       */
	[SchemeNorm] = { color2, color0 },
	[SchemeSel]  = { color3, color4 },
	[SchemeOut]  = { "#000000", "#00ffff" },
	[SchemeHp]   = { color3, "#333333" }
};

static unsigned int lines          = 0; /* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lineheight     = 0; /* -h option; minimum height of a menu line */
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
