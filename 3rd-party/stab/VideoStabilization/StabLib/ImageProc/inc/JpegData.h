#pragma once

/*
* Table K.1 from JPEG spec.
*/
static const unsigned char jpeg_luma_quantizer[64] = {
	16, 11, 10, 16, 24, 40, 51, 61,
	12, 12, 14, 19, 26, 58, 60, 55,
	14, 13, 16, 24, 40, 57, 69, 56,
	14, 17, 22, 29, 51, 87, 80, 62,
	18, 22, 37, 56, 68, 109, 103, 77,
	24, 35, 55, 64, 81, 104, 113, 92,
	49, 64, 78, 87, 103, 121, 120, 101,
	72, 92, 95, 98, 112, 100, 103, 99
};

/*
* Table K.2 from JPEG spec.
*/
static const unsigned char jpeg_chroma_quantizer[64] = {
	17, 18, 24, 47, 99, 99, 99, 99,
	18, 21, 26, 66, 99, 99, 99, 99,
	24, 26, 56, 99, 99, 99, 99, 99,
	47, 66, 99, 99, 99, 99, 99, 99,
	99, 99, 99, 99, 99, 99, 99, 99,
	99, 99, 99, 99, 99, 99, 99, 99,
	99, 99, 99, 99, 99, 99, 99, 99,
	99, 99, 99, 99, 99, 99, 99, 99
};


static const unsigned char jpegData[] = {0xFF, 0xD8, 0xFF, 0xE0, 0x00, 0x10, 0x4A, 0x46,
	0x49, 0x46, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01,
	0x00, 0x01, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x11, 0x08};
									/*				0x01, 0x21*/
	static const unsigned char jpegData1[] = {0x03, 0x01, 0x21, 0x00, 0x02, 0x11, 0x01, 0x03, 
		0x11, 0x01, 0xFF, 0xDB, 0x00, 0x43, 0x00};

	static const unsigned char jpegData2[] = {0xFF, 0xDB, 0x00, 0x43, 0x01};

	static const unsigned char jpegData3[] = {0xFF, 0xC4, 0x00, 0x1F, 0x00, 0x00, 0x01, 0x05, 
		0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 
		0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 
		0x0B, 0xFF, 0xC4, 0x00, 0x1F, 0x01, 0x00, 0x03, 
		0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
		0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
		0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 
		0x0A, 0x0B, 0xFF, 0xC4, 0x00, 0xB5, 0x10, 0x00, 
		0x02, 0x01, 0x03, 0x03, 0x02, 0x04, 0x03, 0x05, 
		0x05, 0x04, 0x04, 0x00, 0x00, 0x01, 0x7D, 0x01, 
		0x02, 0x03, 0x00, 0x04, 0x11, 0x05, 0x12, 0x21, 
		0x31, 0x41, 0x06, 0x13, 0x51, 0x61, 0x07, 0x22, 
		0x71, 0x14, 0x32, 0x81, 0x91, 0xA1, 0x08, 0x23, 
		0x42, 0xB1, 0xC1, 0x15, 0x52, 0xD1, 0xF0, 0x24, 
		0x33, 0x62, 0x72, 0x82, 0x09, 0x0A, 0x16, 0x17, 
		0x18, 0x19, 0x1A, 0x25, 0x26, 0x27, 0x28, 0x29, 
		0x2A, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 
		0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 
		0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 
		0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 
		0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7A, 
		0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 
		0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 
		0x9A, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 
		0xA9, 0xAA, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 
		0xB8, 0xB9, 0xBA, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 
		0xC7, 0xC8, 0xC9, 0xCA, 0xD2, 0xD3, 0xD4, 0xD5, 
		0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xE1, 0xE2, 0xE3, 
		0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xF1, 
		0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 0xF8, 0xF9, 
		0xFA, 0xFF, 0xC4, 0x00, 0xB5, 0x11, 0x00, 0x02, 
		0x01, 0x02, 0x04, 0x04, 0x03, 0x04, 0x07, 0x05, 
		0x04, 0x04, 0x00, 0x01, 0x02, 0x77, 0x00, 0x01, 
		0x02, 0x03, 0x11, 0x04, 0x05, 0x21, 0x31, 0x06, 
		0x12, 0x41, 0x51, 0x07, 0x61, 0x71, 0x13, 0x22, 
		0x32, 0x81, 0x08, 0x14, 0x42, 0x91, 0xA1, 0xB1, 
		0xC1, 0x09, 0x23, 0x33, 0x52, 0xF0, 0x15, 0x62, 
		0x72, 0xD1, 0x0A, 0x16, 0x24, 0x34, 0xE1, 0x25, 
		0xF1, 0x17, 0x18, 0x19, 0x1A, 0x26, 0x27, 0x28, 
		0x29, 0x2A, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 
		0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 
		0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 
		0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 
		0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7A, 
		0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 
		0x8A, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 
		0x99, 0x9A, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 
		0xA8, 0xA9, 0xAA, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 
		0xB7, 0xB8, 0xB9, 0xBA, 0xC2, 0xC3, 0xC4, 0xC5, 
		0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xD2, 0xD3, 0xD4, 
		0xD5, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xE2, 0xE3, 
		0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xF2, 
		0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 0xF8, 0xF9, 0xFA, 
		0xFF, 0xDA, 0x00, 0x0C, 0x03, 0x01, 0x00, 0x02, 
		0x11, 0x03, 0x11, 0x00, 0x3F, 0x00};
