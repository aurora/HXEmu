// =============================================================================
// @author  Pontus Rodling <frigolit@frigolit.net>
// @license MIT license - See LICENSE for more information
// @version $Id: lcd.h 166 2012-04-05 10:06:00Z frigolit $
// =============================================================================

#ifndef __LCD_H__
#define __LCD_H__

#include <stdint.h>
#include <SDL/SDL.h>

class CLCD {
	public:
		CLCD();
		~CLCD();
		
		void command(uint8_t c, uint8_t n);
		void data(uint8_t c, uint8_t n);
		
		void draw(SDL_Surface *dest, int x, int y);
		void set_pixel(uint8_t x, uint8_t y);
		void clear_pixel(uint8_t x, uint8_t y);
		
	private:
		SDL_Surface *surface;
		SDL_mutex *mtx;
		
		uint32_t color_set;
		uint32_t color_clear;
};

#endif

