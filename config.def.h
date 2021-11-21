/* user and group to drop privileges to */
static const char *user  = "root";
static const char *group = "root";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1b2027",     /* after initialization */
	[INPUT] =  "#171c22",   /* during input */
	[FAILED] = "#1f252d",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
