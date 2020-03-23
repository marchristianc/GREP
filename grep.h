#define	CBRA	1
#define	CCHR	2
#define	CDOT	4
#define	CCL	6
#define	NCCL	8
#define	CDOL	10
#define	CEOF	11
#define	CKET	12
#define	CBACK	14
#define	CCIRC	15
#define	ESIZE	256

#define	NBRA	5

#define	STAR	01

char	*loc1;
char	*loc2;
char	*braslist[NBRA];
char	*braelist[NBRA];
char	expbuf[ESIZE+4];
int	nbra;

int	peekc;
int wasFound;
int multiFiles;

void compile(char *regExp);
int execute(char *lineTest);
int backref(int i, char *lp);
int cclass(char *set, int c, int af);
int advance(char *lp, char *ep);