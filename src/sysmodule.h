/* System module interface */

object *sysget (char *);
int sysset (char *, object *);
FILE *sysgetfile (char *, FILE *);
void initsys (void);
