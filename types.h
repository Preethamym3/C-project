typedef int bool;	// These two lines define the types bool, used for
typedef int code;	// logic operations, and code, used to decode
			// operator signs

code encode(char);			// These lines are the prototypes
float fcalc1(float, code);		// for the procedures used in
float fcalc2(float, float, code);	// various .c files 
bool bcalc1(bool, code);
bool bcalc2(bool, bool, code);
