#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"

#include "../sketch.h"

int main() {
	init_platform();

	setup();

	while(1){
		loop();
	}

	cleanup_platform();
	return 0;
}
