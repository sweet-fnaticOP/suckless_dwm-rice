/* user and group to drop privileges to */
static const char *user  = "ada";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#11111b",     /* after initialization */
	[INPUT] =  "#b4befe",   /* during input */
	[FAILED] = "#f38ba8",   /* wrong password */
	[PAM] =    "#cba6f7",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* PAM service that's used for authentication */
static const char* pam_service = "login";
