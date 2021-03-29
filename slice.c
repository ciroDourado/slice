#include "slice.h"


char* slice (int chars, char* string) {
	return string == NULL?
		(char*)NULL:
		_slice(chars, string);
} // end slice


char* slice_or_copy (int chars, char* string) {
	return string == NULL?
		(char*)NULL:
		_slice_or_copy(chars, string);
} // end slice_or_copy


char* copy (char* string) {
	return string == NULL?
		(char*)NULL:
		_copy(string);
} // end copy
