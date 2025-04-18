/* clang-format off */
/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};

static int centered = 0;                    /* -c option; centers dmenu on screen */
static const float menu_width_ratio = 2.0f;
static const float menu_height_ratio = 2.0f;  /* This is the ratio used in the original calculation */
static int border_width = 0;
static int show_prompt = 1;
static float prompt_input_separator_factor = 0.9f;

static float selborder_factor = 0.1f;
static float lineheight_factor = 1.0f;
static int selbordered = 0;

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int columns      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
/* clang-format on */
