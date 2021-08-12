/* Default settings (can be overriden by command line.) */
static int topbar    = 1; /* -b  option; if 0, dmenu appears at bottom     */
static char *prompt  = NULL; /* -p  option; prompt to the left of input field */
static char font[] = "monospace:size=10"; /* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { 
  font,
  "monospace:size=10" 
};

/* colors */
static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char hpfgcolor[]   = "#ffffff";
static char hpbgcolor[]   = "#000000";

static char *colors[SchemeLast][2] = {
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { "#000000",   "#00ffff" },
	[SchemeHp]   = { hpfgcolor, hpbgcolor }
};

static unsigned int lines          = 0; /* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lineheight     = 0; /* -h option; minimum height of a menu line */
static unsigned int min_lineheight = 8;
static const char worddelimiters[] = " "; /* Characters not considered part of a word while deleting words, for example: " /?\"&[]" */

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "normfgcolor", STRING, &normfgcolor },
	{ "normbgcolor", STRING, &normbgcolor },
	{ "selfgcolor",  STRING, &selfgcolor },
	{ "selbgcolor",  STRING, &selbgcolor },

	{ "hpfgcolor",  STRING, &hpfgcolor }, 
	{ "hpbgcolor",  STRING, &hpbgcolor }, 

	{ "prompt",      STRING, &prompt },
	{ "topbar",      INTEGER, &topbar },
};
