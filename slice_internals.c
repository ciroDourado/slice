#include "slice_internals.h"

char* _slice (int chars, char* string) {
	return _is_out_of_bonds(chars, string)?
		string:
		_get_from(chars, string);
} // end _slice


int _is_out_of_bonds (int chars, char* string) {
	return chars < 0 && chars >= strlen(string);
} // end _is_out_of_bonds


char* _get_from (int chars, char* string) {
	char* new_string = (char*)malloc(chars+1);
	
	if( new_string != NULL ) {
		new_string[chars] = '\0';
		strncpy(new_string, string, chars);
	} 
	return new_string;
} // _get_from


char* _slice_or_copy (int chars, char* string) {
	return _is_out_of_bonds(chars, string)?
		_copy(string):
		_get_from(chars, string);
} // end _slice_or_copy


char* _copy (char* string) {
	return _get_from(strlen(string), string);
} // end _copy
