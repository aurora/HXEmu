// =============================================================================
// @author  Pontus Rodling <frigolit@frigolit.net>
// @license MIT license - See LICENSE for more information
// @version $Id: serial.h 106 2012-02-11 11:13:30Z frigolit $
// =============================================================================

#ifndef __SERIAL_H__
#define __SERIAL_H__

#include <stdint.h>

// TODO: Add support for DTR, RTS, CTS and DSR

class Serial {
	public:
		Serial();
		~Serial();
		
		virtual void reset() { }
		virtual void send(uint8_t c) { }
		virtual void _recv(uint8_t c) { }
		virtual uint8_t recv() { return 0; }
		virtual uint8_t peek() { return 0; }
		
		void set_endpoint(Serial *ep);
		
		Serial *endpoint;
};

#endif

