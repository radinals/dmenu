/* Default settings (can be overriden by command line.) */
static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static const char *prompt  = NULL; /* -p  option; prompt to the left of input field */
static const char *fonts[] = {"Hack Regular:size=11"};  /* -fn option overrides fonts[0]; default X11 font or font set */

/* colors */
static const char col_grey[] = "#262626";
static const char col_black[] = "#181818";
static const char col_white[] = "#ebdbb2";
static const char col_green[] = "#4b6e50";
static const char *colors[SchemeLast][2] = {
	/*                fg         bg       */
	[SchemeNorm] = { col_white, col_grey },
	[SchemeSel]  = { col_white, col_green },
	[SchemeOut]  = { col_black, col_green },
	[SchemeHp]   = { col_green, col_grey }
};

static unsigned int lines          = 0; /* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lineheight     = 0; /* -h option; minimum height of a menu line */
static unsigned int min_lineheight = 8;
static const char worddelimiters[] = " "; /* Characters not considered part of a word while deleting words, for example: " /?\"&[]" */
