#include "ModuleInteractivity.h"


unordered_map<int, unordered_map<int, int>> ModuleInteractivity::mapMultiEventList = {
	{	
		SDL_WINDOWEVENT,
		{
			{ SDL_WINDOWEVENT_SHOWN, EVENT_WINDOW_SHOW },
			{ SDL_WINDOWEVENT_HIDDEN, EVENT_WINDOW_HIDE },
			{ SDL_WINDOWEVENT_MOVED, EVENT_WINDOW_MOVE },
			{ SDL_WINDOWEVENT_RESIZED, EVENT_WINDOW_RESIZE },
			{ SDL_WINDOWEVENT_MINIMIZED, EVENT_WINDOW_MINSIZE },
			{ SDL_WINDOWEVENT_MAXIMIZED, EVENT_WINDOW_MAXSIZE },
			{ SDL_WINDOWEVENT_ENTER, EVENT_WINDOW_ENTER },
			{ SDL_WINDOWEVENT_LEAVE, EVENT_WINDOW_LEAVE },
			{ SDL_WINDOWEVENT_FOCUS_GAINED, EVENT_WINDOW_FOCUS },
			{ SDL_WINDOWEVENT_FOCUS_LOST, EVENT_WINDOW_LOST },
			{ SDL_WINDOWEVENT_CLOSE, EVENT_WINDOW_CLOSE },
			{ SDL_WINDOWEVENT_EXPOSED, EVENT_WINDOW_EXPOSED },
		}
	},
	{
		SDL_KEYDOWN,
		{
			{ SDLK_0, EVENT_KEYDOWN_0 },
			{ SDLK_KP_0, EVENT_KEYDOWN_0 },
			{ SDLK_KP_00, EVENT_KEYDOWN_00 },
			{ SDLK_KP_000, EVENT_KEYDOWN_000 },
			{ SDLK_1, EVENT_KEYDOWN_1 },
			{ SDLK_KP_1, EVENT_KEYDOWN_1 },
			{ SDLK_2, EVENT_KEYDOWN_2 },
			{ SDLK_KP_2, EVENT_KEYDOWN_2 },
			{ SDLK_3, EVENT_KEYDOWN_3 },
			{ SDLK_KP_3, EVENT_KEYDOWN_3 },
			{ SDLK_4, EVENT_KEYDOWN_4 },
			{ SDLK_KP_4, EVENT_KEYDOWN_4 },
			{ SDLK_5, EVENT_KEYDOWN_5 },
			{ SDLK_KP_5, EVENT_KEYDOWN_5 },
			{ SDLK_6, EVENT_KEYDOWN_6 },
			{ SDLK_KP_6, EVENT_KEYDOWN_6 },
			{ SDLK_7, EVENT_KEYDOWN_7 },
			{ SDLK_KP_7, EVENT_KEYDOWN_7 },
			{ SDLK_8, EVENT_KEYDOWN_8 },
			{ SDLK_KP_8, EVENT_KEYDOWN_8 },
			{ SDLK_9, EVENT_KEYDOWN_9 },
			{ SDLK_KP_9, EVENT_KEYDOWN_9 },
			{ SDLK_F1, EVENT_KEYDOWN_F1 },
			{ SDLK_F2, EVENT_KEYDOWN_F2 },
			{ SDLK_F3, EVENT_KEYDOWN_F3 },
			{ SDLK_F4, EVENT_KEYDOWN_F4 },
			{ SDLK_F5, EVENT_KEYDOWN_F5 },
			{ SDLK_F6, EVENT_KEYDOWN_F6 },
			{ SDLK_F7, EVENT_KEYDOWN_F7 },
			{ SDLK_F8, EVENT_KEYDOWN_F8 },
			{ SDLK_F9, EVENT_KEYDOWN_F9 },
			{ SDLK_F10, EVENT_KEYDOWN_F10 },
			{ SDLK_F11, EVENT_KEYDOWN_F11 },
			{ SDLK_F12, EVENT_KEYDOWN_F12 },
			{ SDLK_F13, EVENT_KEYDOWN_F13 },
			{ SDLK_F14, EVENT_KEYDOWN_F14 },
			{ SDLK_F15, EVENT_KEYDOWN_F15 },
			{ SDLK_F16, EVENT_KEYDOWN_F16 },
			{ SDLK_F17, EVENT_KEYDOWN_F17 },
			{ SDLK_F18, EVENT_KEYDOWN_F18 },
			{ SDLK_F19, EVENT_KEYDOWN_F19 },
			{ SDLK_F20, EVENT_KEYDOWN_F20 },
			{ SDLK_F21, EVENT_KEYDOWN_F21 },
			{ SDLK_F22, EVENT_KEYDOWN_F22 },
			{ SDLK_F23, EVENT_KEYDOWN_F23 },
			{ SDLK_F24, EVENT_KEYDOWN_F24 },
			{ SDLK_a, EVENT_KEYDOWN_A },
			{ SDLK_b, EVENT_KEYDOWN_B },
			{ SDLK_c, EVENT_KEYDOWN_C },
			{ SDLK_d, EVENT_KEYDOWN_D },
			{ SDLK_e, EVENT_KEYDOWN_E },
			{ SDLK_f, EVENT_KEYDOWN_F },
			{ SDLK_g, EVENT_KEYDOWN_G },
			{ SDLK_h, EVENT_KEYDOWN_H },
			{ SDLK_i, EVENT_KEYDOWN_I },
			{ SDLK_j, EVENT_KEYDOWN_J },
			{ SDLK_k, EVENT_KEYDOWN_K },
			{ SDLK_l, EVENT_KEYDOWN_L },
			{ SDLK_m, EVENT_KEYDOWN_M },
			{ SDLK_n, EVENT_KEYDOWN_N },
			{ SDLK_o, EVENT_KEYDOWN_O },
			{ SDLK_p, EVENT_KEYDOWN_P },
			{ SDLK_q, EVENT_KEYDOWN_Q },
			{ SDLK_r, EVENT_KEYDOWN_R },
			{ SDLK_s, EVENT_KEYDOWN_S },
			{ SDLK_t, EVENT_KEYDOWN_T },
			{ SDLK_u, EVENT_KEYDOWN_U },
			{ SDLK_v, EVENT_KEYDOWN_V },
			{ SDLK_w, EVENT_KEYDOWN_W },
			{ SDLK_x, EVENT_KEYDOWN_X },
			{ SDLK_y, EVENT_KEYDOWN_Y },
			{ SDLK_z, EVENT_KEYDOWN_Z },
			{ SDLK_KP_A, EVENT_KEYDOWN_A },
			{ SDLK_KP_B, EVENT_KEYDOWN_B },
			{ SDLK_KP_C, EVENT_KEYDOWN_C },
			{ SDLK_KP_D, EVENT_KEYDOWN_D },
			{ SDLK_KP_E, EVENT_KEYDOWN_E },
			{ SDLK_KP_F, EVENT_KEYDOWN_F },
			{ SDLK_ESCAPE, EVENT_KEYDOWN_ESC },
			{ SDLK_RETURN, EVENT_KEYDOWN_ENTER },
			{ SDLK_KP_ENTER, EVENT_KEYDOWN_ENTER },
			{ SDLK_BACKSPACE, EVENT_KEYDOWN_BACKSPACE },
			{ SDLK_KP_BACKSPACE, EVENT_KEYDOWN_BACKSPACE },
			{ SDLK_UP, EVENT_KEYDOWN_UP },
			{ SDLK_DOWN, EVENT_KEYDOWN_DOWN },
			{ SDLK_LEFT, EVENT_KEYDOWN_LEFT },
			{ SDLK_RIGHT, EVENT_KEYDOWN_RIGHT },
			{ SDLK_INSERT, EVENT_KEYDOWN_INSERT },
			{ SDLK_DELETE, EVENT_KEYDOWN_DELETE },
			{ SDLK_HOME, EVENT_KEYDOWN_HOME },
			{ SDLK_END, EVENT_KEYDOWN_END },
			{ SDLK_PAGEUP, EVENT_KEYDOWN_PAGEUP },
			{ SDLK_PAGEDOWN, EVENT_KEYDOWN_PAGEDOWN },
			{ SDLK_LCTRL, EVENT_KEYDOWN_LEFTCTRL },
			{ SDLK_LGUI, EVENT_KEYDOWN_LEFTGUI },
			{ SDLK_LALT, EVENT_KEYDOWN_LEFTALT },
			{ SDLK_LSHIFT, EVENT_KEYDOWN_LEFTSHIFT },
			{ SDLK_RCTRL, EVENT_KEYDOWN_RIGHTCTRL },
			{ SDLK_RGUI, EVENT_KEYDOWN_RIGHTGUI },
			{ SDLK_RALT, EVENT_KEYDOWN_RIGHTALT },
			{ SDLK_RSHIFT, EVENT_KEYDOWN_RIGHTSHIFT },
			{ SDLK_SPACE, EVENT_KEYDOWN_SPACE },
			{ SDLK_TAB, EVENT_KEYDOWN_TAB },
			{ SDLK_KP_TAB, EVENT_KEYDOWN_TAB },
			{ SDLK_CAPSLOCK, EVENT_KEYDOWN_CAPSLOCK },
			{ SDLK_NUMLOCKCLEAR, EVENT_KEYDOWN_NUMLOCK },
			{ SDLK_PRINTSCREEN, EVENT_KEYDOWN_PRINTSCREEN },
			{ SDLK_SCROLLLOCK, EVENT_KEYDOWN_SCROLLLOCK },
			{ SDLK_PAUSE, EVENT_KEYDOWN_PAUSE },
			{ SDLK_AUDIOMUTE, EVENT_KEYDOWN_AUDIOMUTE },
			{ SDLK_AUDIOPREV, EVENT_KEYDOWN_AUDIOPREV },
			{ SDLK_AUDIONEXT, EVENT_KEYDOWN_AUDIONEXT },
			{ SDLK_AUDIOPLAY, EVENT_KEYDOWN_AUDIOPLAY },
			{ SDLK_AUDIOSTOP, EVENT_KEYDOWN_AUDIOSTOP },
			{ SDLK_VOLUMEUP, EVENT_KEYDOWN_VOLUMEUP },
			{ SDLK_VOLUMEDOWN, EVENT_KEYDOWN_VOLUMEDOWN },
			{ SDLK_BRIGHTNESSUP, EVENT_KEYDOWN_BRIGHTNESSUP },
			{ SDLK_BRIGHTNESSDOWN, EVENT_KEYDOWN_BRIGHTNESSDOWN },
			{ SDLK_BACKQUOTE, EVENT_KEYDOWN_BACKQUOTE },
			{ SDLK_EXCLAIM, EVENT_KEYDOWN_EXCLAM },
			{ SDLK_KP_EXCLAM, EVENT_KEYDOWN_EXCLAM },
			{ SDLK_AT, EVENT_KEYDOWN_AT },
			{ SDLK_KP_AT, EVENT_KEYDOWN_AT },
			{ SDLK_HASH, EVENT_KEYDOWN_HASH },
			{ SDLK_KP_HASH, EVENT_KEYDOWN_HASH },
			{ SDLK_DOLLAR, EVENT_KEYDOWN_DOOLAR },
			{ SDLK_CARET, EVENT_KEYDOWN_CARET },
			{ SDLK_KP_POWER, EVENT_KEYDOWN_CARET },
			{ SDLK_AMPERSAND, EVENT_KEYDOWN_AMPERSAND },
			{ SDLK_KP_AMPERSAND, EVENT_KEYDOWN_AMPERSAND },
			{ SDLK_KP_DBLAMPERSAND, EVENT_KEYDOWN_DBLAMPERSAND },
			{ SDLK_ASTERISK, EVENT_KEYDOWN_ASTERISK },
			{ SDLK_KP_MULTIPLY, EVENT_KEYDOWN_ASTERISK },
			{ SDLK_LEFTPAREN, EVENT_KEYDOWN_LEFTPAREN },
			{ SDLK_KP_LEFTPAREN, EVENT_KEYDOWN_LEFTPAREN },
			{ SDLK_RIGHTPAREN, EVENT_KEYDOWN_RIGHTPAREN },
			{ SDLK_KP_RIGHTPAREN, EVENT_KEYDOWN_RIGHTPAREN },
			{ SDLK_MINUS, EVENT_KEYDOWN_MINUS },
			{ SDLK_KP_MINUS, EVENT_KEYDOWN_MINUS },
			{ SDLK_UNDERSCORE, EVENT_KEYDOWN_UNDERSCORE },
			{ SDLK_PLUS, EVENT_KEYDOWN_PLUS },
			{ SDLK_KP_PLUS, EVENT_KEYDOWN_PLUS },
			{ SDLK_EQUALS, EVENT_KEYDOWN_EQUALS },
			{ SDLK_KP_EQUALS, EVENT_KEYDOWN_EQUALS },
			{ SDLK_LEFTBRACKET, EVENT_KEYDOWN_LEFTBRACKET },
			{ SDLK_RIGHTBRACKET, EVENT_KEYDOWN_RIGHTBRACKET },
			{ SDLK_KP_LEFTBRACE, EVENT_KEYDOWN_LEFTBRACE },
			{ SDLK_KP_RIGHTBRACE, EVENT_KEYDOWN_RIGHTBRACE },
			{ SDLK_COLON, EVENT_KEYDOWN_COLON },
			{ SDLK_SEMICOLON, EVENT_KEYDOWN_SEMICOLON },
			{ SDLK_BACKSLASH, EVENT_KEYDOWN_BACKSLASH },
			{ SDLK_QUOTE, EVENT_KEYDOWN_QUOTE },
			{ SDLK_QUOTEDBL, EVENT_KEYDOWN_QUOTEDBL },
			{ SDLK_LESS, EVENT_KEYDOWN_LESS },
			{ SDLK_GREATER, EVENT_KEYDOWN_GREATER },
			{ SDLK_COMMA, EVENT_KEYDOWN_COMMA },
			{ SDLK_PERIOD, EVENT_KEYDOWN_PERIOD },
			{ SDLK_QUESTION, EVENT_KEYDOWN_QUESTION },
			{ SDLK_SLASH, EVENT_KEYDOWN_SLASH },
			{ SDLK_KP_VERTICALBAR, EVENT_KEYDOWN_VERTICALBAR },
			{ SDLK_KP_DBLVERTICALBAR, EVENT_KEYDOWN_DBLVERTICALBAR },
			{ SDLK_WWW, EVENT_KEYDOWN_WWW },
			{ SDLK_MAIL, EVENT_KEYDOWN_EMAIL },
		}
	},
	{
		SDL_KEYUP,
		{
			{ SDLK_0, EVENT_KEYUP_0 },
			{ SDLK_KP_0, EVENT_KEYUP_0 },
			{ SDLK_KP_00, EVENT_KEYUP_00 },
			{ SDLK_KP_000, EVENT_KEYUP_000 },
			{ SDLK_1, EVENT_KEYUP_1 },
			{ SDLK_KP_1, EVENT_KEYUP_1 },
			{ SDLK_2, EVENT_KEYUP_2 },
			{ SDLK_KP_2, EVENT_KEYUP_2 },
			{ SDLK_3, EVENT_KEYUP_3 },
			{ SDLK_KP_3, EVENT_KEYUP_3 },
			{ SDLK_4, EVENT_KEYUP_4 },
			{ SDLK_KP_4, EVENT_KEYUP_4 },
			{ SDLK_5, EVENT_KEYUP_5 },
			{ SDLK_KP_5, EVENT_KEYUP_5 },
			{ SDLK_6, EVENT_KEYUP_6 },
			{ SDLK_KP_6, EVENT_KEYUP_6 },
			{ SDLK_7, EVENT_KEYUP_7 },
			{ SDLK_KP_7, EVENT_KEYUP_7 },
			{ SDLK_8, EVENT_KEYUP_8 },
			{ SDLK_KP_8, EVENT_KEYUP_8 },
			{ SDLK_9, EVENT_KEYUP_9 },
			{ SDLK_KP_9, EVENT_KEYUP_9 },
			{ SDLK_F1, EVENT_KEYUP_F1 },
			{ SDLK_F2, EVENT_KEYUP_F2 },
			{ SDLK_F3, EVENT_KEYUP_F3 },
			{ SDLK_F4, EVENT_KEYUP_F4 },
			{ SDLK_F5, EVENT_KEYUP_F5 },
			{ SDLK_F6, EVENT_KEYUP_F6 },
			{ SDLK_F7, EVENT_KEYUP_F7 },
			{ SDLK_F8, EVENT_KEYUP_F8 },
			{ SDLK_F9, EVENT_KEYUP_F9 },
			{ SDLK_F10, EVENT_KEYUP_F10 },
			{ SDLK_F11, EVENT_KEYUP_F11 },
			{ SDLK_F12, EVENT_KEYUP_F12 },
			{ SDLK_F13, EVENT_KEYUP_F13 },
			{ SDLK_F14, EVENT_KEYUP_F14 },
			{ SDLK_F15, EVENT_KEYUP_F15 },
			{ SDLK_F16, EVENT_KEYUP_F16 },
			{ SDLK_F17, EVENT_KEYUP_F17 },
			{ SDLK_F18, EVENT_KEYUP_F18 },
			{ SDLK_F19, EVENT_KEYUP_F19 },
			{ SDLK_F20, EVENT_KEYUP_F20 },
			{ SDLK_F21, EVENT_KEYUP_F21 },
			{ SDLK_F22, EVENT_KEYUP_F22 },
			{ SDLK_F23, EVENT_KEYUP_F23 },
			{ SDLK_F24, EVENT_KEYUP_F24 },
			{ SDLK_a, EVENT_KEYUP_A },
			{ SDLK_b, EVENT_KEYUP_B },
			{ SDLK_c, EVENT_KEYUP_C },
			{ SDLK_d, EVENT_KEYUP_D },
			{ SDLK_e, EVENT_KEYUP_E },
			{ SDLK_f, EVENT_KEYUP_F },
			{ SDLK_g, EVENT_KEYUP_G },
			{ SDLK_h, EVENT_KEYUP_H },
			{ SDLK_i, EVENT_KEYUP_I },
			{ SDLK_j, EVENT_KEYUP_J },
			{ SDLK_k, EVENT_KEYUP_K },
			{ SDLK_l, EVENT_KEYUP_L },
			{ SDLK_m, EVENT_KEYUP_M },
			{ SDLK_n, EVENT_KEYUP_N },
			{ SDLK_o, EVENT_KEYUP_O },
			{ SDLK_p, EVENT_KEYUP_P },
			{ SDLK_q, EVENT_KEYUP_Q },
			{ SDLK_r, EVENT_KEYUP_R },
			{ SDLK_s, EVENT_KEYUP_S },
			{ SDLK_t, EVENT_KEYUP_T },
			{ SDLK_u, EVENT_KEYUP_U },
			{ SDLK_v, EVENT_KEYUP_V },
			{ SDLK_w, EVENT_KEYUP_W },
			{ SDLK_x, EVENT_KEYUP_X },
			{ SDLK_y, EVENT_KEYUP_Y },
			{ SDLK_z, EVENT_KEYUP_Z },
			{ SDLK_KP_A, EVENT_KEYUP_A },
			{ SDLK_KP_B, EVENT_KEYUP_B },
			{ SDLK_KP_C, EVENT_KEYUP_C },
			{ SDLK_KP_D, EVENT_KEYUP_D },
			{ SDLK_KP_E, EVENT_KEYUP_E },
			{ SDLK_KP_F, EVENT_KEYUP_F },
			{ SDLK_ESCAPE, EVENT_KEYUP_ESC },
			{ SDLK_RETURN, EVENT_KEYUP_ENTER },
			{ SDLK_KP_ENTER, EVENT_KEYUP_ENTER },
			{ SDLK_BACKSPACE, EVENT_KEYUP_BACKSPACE },
			{ SDLK_KP_BACKSPACE, EVENT_KEYUP_BACKSPACE },
			{ SDLK_UP, EVENT_KEYUP_UP },
			{ SDLK_DOWN, EVENT_KEYUP_DOWN },
			{ SDLK_LEFT, EVENT_KEYUP_LEFT },
			{ SDLK_RIGHT, EVENT_KEYUP_RIGHT },
			{ SDLK_INSERT, EVENT_KEYUP_INSERT },
			{ SDLK_DELETE, EVENT_KEYUP_DELETE },
			{ SDLK_HOME, EVENT_KEYUP_HOME },
			{ SDLK_END, EVENT_KEYUP_END },
			{ SDLK_PAGEUP, EVENT_KEYUP_PAGEUP },
			{ SDLK_PAGEDOWN, EVENT_KEYUP_PAGEDOWN },
			{ SDLK_LCTRL, EVENT_KEYUP_LEFTCTRL },
			{ SDLK_LGUI, EVENT_KEYUP_LEFTGUI },
			{ SDLK_LALT, EVENT_KEYUP_LEFTALT },
			{ SDLK_LSHIFT, EVENT_KEYUP_LEFTSHIFT },
			{ SDLK_RCTRL, EVENT_KEYUP_RIGHTCTRL },
			{ SDLK_RGUI, EVENT_KEYUP_RIGHTGUI },
			{ SDLK_RALT, EVENT_KEYUP_RIGHTALT },
			{ SDLK_RSHIFT, EVENT_KEYUP_RIGHTSHIFT },
			{ SDLK_SPACE, EVENT_KEYUP_SPACE },
			{ SDLK_TAB, EVENT_KEYUP_TAB },
			{ SDLK_KP_TAB, EVENT_KEYUP_TAB },
			{ SDLK_CAPSLOCK, EVENT_KEYUP_CAPSLOCK },
			{ SDLK_NUMLOCKCLEAR, EVENT_KEYUP_NUMLOCK },
			{ SDLK_PRINTSCREEN, EVENT_KEYUP_PRINTSCREEN },
			{ SDLK_SCROLLLOCK, EVENT_KEYUP_SCROLLLOCK },
			{ SDLK_PAUSE, EVENT_KEYUP_PAUSE },
			{ SDLK_AUDIOMUTE, EVENT_KEYUP_AUDIOMUTE },
			{ SDLK_AUDIOPREV, EVENT_KEYUP_AUDIOPREV },
			{ SDLK_AUDIONEXT, EVENT_KEYUP_AUDIONEXT },
			{ SDLK_AUDIOPLAY, EVENT_KEYUP_AUDIOPLAY },
			{ SDLK_AUDIOSTOP, EVENT_KEYUP_AUDIOSTOP },
			{ SDLK_VOLUMEUP, EVENT_KEYUP_VOLUMEUP },
			{ SDLK_VOLUMEDOWN, EVENT_KEYUP_VOLUMEDOWN },
			{ SDLK_BRIGHTNESSUP, EVENT_KEYUP_BRIGHTNESSUP },
			{ SDLK_BRIGHTNESSDOWN, EVENT_KEYUP_BRIGHTNESSDOWN },
			{ SDLK_BACKQUOTE, EVENT_KEYUP_BACKQUOTE },
			{ SDLK_EXCLAIM, EVENT_KEYUP_EXCLAM },
			{ SDLK_KP_EXCLAM, EVENT_KEYUP_EXCLAM },
			{ SDLK_AT, EVENT_KEYUP_AT },
			{ SDLK_KP_AT, EVENT_KEYUP_AT },
			{ SDLK_HASH, EVENT_KEYUP_HASH },
			{ SDLK_KP_HASH, EVENT_KEYUP_HASH },
			{ SDLK_DOLLAR, EVENT_KEYUP_DOOLAR },
			{ SDLK_CARET, EVENT_KEYUP_CARET },
			{ SDLK_KP_POWER, EVENT_KEYUP_CARET },
			{ SDLK_AMPERSAND, EVENT_KEYUP_AMPERSAND },
			{ SDLK_KP_AMPERSAND, EVENT_KEYUP_AMPERSAND },
			{ SDLK_KP_DBLAMPERSAND, EVENT_KEYUP_DBLAMPERSAND },
			{ SDLK_ASTERISK, EVENT_KEYUP_ASTERISK },
			{ SDLK_KP_MULTIPLY, EVENT_KEYUP_ASTERISK },
			{ SDLK_LEFTPAREN, EVENT_KEYUP_LEFTPAREN },
			{ SDLK_KP_LEFTPAREN, EVENT_KEYUP_LEFTPAREN },
			{ SDLK_RIGHTPAREN, EVENT_KEYUP_RIGHTPAREN },
			{ SDLK_KP_RIGHTPAREN, EVENT_KEYUP_RIGHTPAREN },
			{ SDLK_MINUS, EVENT_KEYUP_MINUS },
			{ SDLK_KP_MINUS, EVENT_KEYUP_MINUS },
			{ SDLK_UNDERSCORE, EVENT_KEYUP_UNDERSCORE },
			{ SDLK_PLUS, EVENT_KEYUP_PLUS },
			{ SDLK_KP_PLUS, EVENT_KEYUP_PLUS },
			{ SDLK_EQUALS, EVENT_KEYUP_EQUALS },
			{ SDLK_KP_EQUALS, EVENT_KEYUP_EQUALS },
			{ SDLK_LEFTBRACKET, EVENT_KEYUP_LEFTBRACKET },
			{ SDLK_RIGHTBRACKET, EVENT_KEYUP_RIGHTBRACKET },
			{ SDLK_KP_LEFTBRACE, EVENT_KEYUP_LEFTBRACE },
			{ SDLK_KP_RIGHTBRACE, EVENT_KEYUP_RIGHTBRACE },
			{ SDLK_COLON, EVENT_KEYUP_COLON },
			{ SDLK_SEMICOLON, EVENT_KEYUP_SEMICOLON },
			{ SDLK_BACKSLASH, EVENT_KEYUP_BACKSLASH },
			{ SDLK_QUOTE, EVENT_KEYUP_QUOTE },
			{ SDLK_QUOTEDBL, EVENT_KEYUP_QUOTEDBL },
			{ SDLK_LESS, EVENT_KEYUP_LESS },
			{ SDLK_GREATER, EVENT_KEYUP_GREATER },
			{ SDLK_COMMA, EVENT_KEYUP_COMMA },
			{ SDLK_PERIOD, EVENT_KEYUP_PERIOD },
			{ SDLK_QUESTION, EVENT_KEYUP_QUESTION },
			{ SDLK_SLASH, EVENT_KEYUP_SLASH },
			{ SDLK_KP_VERTICALBAR, EVENT_KEYUP_VERTICALBAR },
			{ SDLK_KP_DBLVERTICALBAR, EVENT_KEYUP_DBLVERTICALBAR },
			{ SDLK_WWW, EVENT_KEYUP_WWW },
			{ SDLK_MAIL, EVENT_KEYUP_EMAIL },
		}
	},
	{
		SDL_MOUSEBUTTONDOWN,
		{
			{ SDL_BUTTON_LEFT, EVENT_MOUSEBTNDOWN_LEFT },
			{ SDL_BUTTON_RIGHT, EVENT_MOUSEBTNDOWN_RIGHT },
			{ SDL_BUTTON_MIDDLE, EVENT_MOUSEBTNDOWN_MIDDLE },
		}
	},
	{
		SDL_MOUSEBUTTONUP,
		{
			{ SDL_BUTTON_LEFT, EVENT_MOUSEBTNUP_LEFT },
			{ SDL_BUTTON_RIGHT, EVENT_MOUSEBTNUP_RIGHT },
			{ SDL_BUTTON_MIDDLE, EVENT_MOUSEBTNUP_MIDDLE },
		}
	}
};

unordered_map<int, int> ModuleInteractivity::mapSingleEventList = {
	{ SDL_QUIT, EVENT_QUIT },
	{ SDL_MOUSEMOTION, EVENT_MOUSEMOTION },
	{ SDL_MOUSEWHEEL, EVENT_MOUSESCROLL },
	{ SDL_TEXTINPUT, EVENT_TEXTINPUT },
};


ModuleInteractivity& ModuleInteractivity::Instance()
{
	static ModuleInteractivity* _instance = new ModuleInteractivity();
	return *_instance;
}


ModuleInteractivity::ModuleInteractivity()
{
	_vCMethods = {
		{ "GetCursorPosition", getCursorPosition },
		{ "GetScrollValue", getScrollValue },
		{ "StartTextInput", startTextInput },
		{ "StopTextInput", stopTextInput },
		{ "GetInputText", getInputText },
		{ "UpdateEvent", updateEvent },
		{ "GetEventType", getEventType },
	};

	_vMacros = {
		{ "EVENT_QUIT", EVENT_QUIT },

		{ "EVENT_MOUSEMOTION", EVENT_MOUSEMOTION },
		{ "EVENT_MOUSEBTNDOWN_LEFT", EVENT_MOUSEBTNDOWN_LEFT },
		{ "EVENT_MOUSEBTNDOWN_RIGHT", EVENT_MOUSEBTNDOWN_RIGHT },
		{ "EVENT_MOUSEBTNDOWN_MIDDLE", EVENT_MOUSEBTNDOWN_MIDDLE },
		{ "EVENT_MOUSEBTNUP_LEFT", EVENT_MOUSEBTNUP_LEFT },
		{ "EVENT_MOUSEBTNUP_RIGHT", EVENT_MOUSEBTNUP_RIGHT },
		{ "EVENT_MOUSEBTNUP_MIDDLE", EVENT_MOUSEBTNUP_MIDDLE },
		{ "EVENT_MOUSESCROLL", EVENT_MOUSESCROLL },

		{ "EVENT_WINDOW_SHOW", EVENT_WINDOW_SHOW },
		{ "EVENT_WINDOW_HIDE", EVENT_WINDOW_HIDE },
		{ "EVENT_WINDOW_MOVE", EVENT_WINDOW_MOVE },
		{ "EVENT_WINDOW_RESIZE", EVENT_WINDOW_RESIZE },
		{ "EVENT_WINDOW_MINSIZE", EVENT_WINDOW_MINSIZE },
		{ "EVENT_WINDOW_MAXSIZE", EVENT_WINDOW_MAXSIZE },
		{ "EVENT_WINDOW_ENTER", EVENT_WINDOW_ENTER },
		{ "EVENT_WINDOW_LEAVE", EVENT_WINDOW_LEAVE },
		{ "EVENT_WINDOW_FOCUS", EVENT_WINDOW_FOCUS },
		{ "EVENT_WINDOW_LOST", EVENT_WINDOW_LOST },
		{ "EVENT_WINDOW_CLOSE", EVENT_WINDOW_CLOSE },
		{ "EVENT_WINDOW_EXPOSED", EVENT_WINDOW_EXPOSED },

		{ "EVENT_KEYDOWN_0", EVENT_KEYDOWN_0 },
		{ "EVENT_KEYDOWN_00", EVENT_KEYDOWN_00 },
		{ "EVENT_KEYDOWN_000", EVENT_KEYDOWN_000 },
		{ "EVENT_KEYDOWN_1", EVENT_KEYDOWN_1 },
		{ "EVENT_KEYDOWN_2", EVENT_KEYDOWN_2 },
		{ "EVENT_KEYDOWN_3", EVENT_KEYDOWN_3 },
		{ "EVENT_KEYDOWN_4", EVENT_KEYDOWN_4 },
		{ "EVENT_KEYDOWN_5", EVENT_KEYDOWN_5 },
		{ "EVENT_KEYDOWN_6", EVENT_KEYDOWN_6 },
		{ "EVENT_KEYDOWN_7", EVENT_KEYDOWN_7 },
		{ "EVENT_KEYDOWN_8", EVENT_KEYDOWN_8 },
		{ "EVENT_KEYDOWN_9", EVENT_KEYDOWN_9 },
		{ "EVENT_KEYDOWN_F1", EVENT_KEYDOWN_F1 },
		{ "EVENT_KEYDOWN_F2", EVENT_KEYDOWN_F2 },
		{ "EVENT_KEYDOWN_F3", EVENT_KEYDOWN_F3 },
		{ "EVENT_KEYDOWN_F4", EVENT_KEYDOWN_F4 },
		{ "EVENT_KEYDOWN_F5", EVENT_KEYDOWN_F5 },
		{ "EVENT_KEYDOWN_F6", EVENT_KEYDOWN_F6 },
		{ "EVENT_KEYDOWN_F7", EVENT_KEYDOWN_F7 },
		{ "EVENT_KEYDOWN_F8", EVENT_KEYDOWN_F8 },
		{ "EVENT_KEYDOWN_F9", EVENT_KEYDOWN_F9 },
		{ "EVENT_KEYDOWN_F10", EVENT_KEYDOWN_F10 },
		{ "EVENT_KEYDOWN_F11", EVENT_KEYDOWN_F11 },
		{ "EVENT_KEYDOWN_F12", EVENT_KEYDOWN_F12 },
		{ "EVENT_KEYDOWN_F13", EVENT_KEYDOWN_F13 },
		{ "EVENT_KEYDOWN_F14", EVENT_KEYDOWN_F14 },
		{ "EVENT_KEYDOWN_F15", EVENT_KEYDOWN_F15 },
		{ "EVENT_KEYDOWN_F16", EVENT_KEYDOWN_F16 },
		{ "EVENT_KEYDOWN_F17", EVENT_KEYDOWN_F17 },
		{ "EVENT_KEYDOWN_F18", EVENT_KEYDOWN_F18 },
		{ "EVENT_KEYDOWN_F19", EVENT_KEYDOWN_F19 },
		{ "EVENT_KEYDOWN_F20", EVENT_KEYDOWN_F20 },
		{ "EVENT_KEYDOWN_F21", EVENT_KEYDOWN_F21 },
		{ "EVENT_KEYDOWN_F22", EVENT_KEYDOWN_F22 },
		{ "EVENT_KEYDOWN_F23", EVENT_KEYDOWN_F23 },
		{ "EVENT_KEYDOWN_F24", EVENT_KEYDOWN_F24 },
		{ "EVENT_KEYDOWN_A", EVENT_KEYDOWN_A },
		{ "EVENT_KEYDOWN_B", EVENT_KEYDOWN_B },
		{ "EVENT_KEYDOWN_C", EVENT_KEYDOWN_C },
		{ "EVENT_KEYDOWN_D", EVENT_KEYDOWN_D },
		{ "EVENT_KEYDOWN_E", EVENT_KEYDOWN_E },
		{ "EVENT_KEYDOWN_F", EVENT_KEYDOWN_F },
		{ "EVENT_KEYDOWN_G", EVENT_KEYDOWN_G },
		{ "EVENT_KEYDOWN_H", EVENT_KEYDOWN_H },
		{ "EVENT_KEYDOWN_I", EVENT_KEYDOWN_I },
		{ "EVENT_KEYDOWN_J", EVENT_KEYDOWN_J },
		{ "EVENT_KEYDOWN_K", EVENT_KEYDOWN_K },
		{ "EVENT_KEYDOWN_L", EVENT_KEYDOWN_L },
		{ "EVENT_KEYDOWN_M", EVENT_KEYDOWN_M },
		{ "EVENT_KEYDOWN_N", EVENT_KEYDOWN_N },
		{ "EVENT_KEYDOWN_O", EVENT_KEYDOWN_O },
		{ "EVENT_KEYDOWN_P", EVENT_KEYDOWN_P },
		{ "EVENT_KEYDOWN_Q", EVENT_KEYDOWN_Q },
		{ "EVENT_KEYDOWN_R", EVENT_KEYDOWN_R },
		{ "EVENT_KEYDOWN_S", EVENT_KEYDOWN_S },
		{ "EVENT_KEYDOWN_T", EVENT_KEYDOWN_T },
		{ "EVENT_KEYDOWN_U", EVENT_KEYDOWN_U },
		{ "EVENT_KEYDOWN_V", EVENT_KEYDOWN_V },
		{ "EVENT_KEYDOWN_W", EVENT_KEYDOWN_W },
		{ "EVENT_KEYDOWN_X", EVENT_KEYDOWN_X },
		{ "EVENT_KEYDOWN_Y", EVENT_KEYDOWN_Y },
		{ "EVENT_KEYDOWN_Z", EVENT_KEYDOWN_Z },
		{ "EVENT_KEYDOWN_ESC", EVENT_KEYDOWN_ESC },
		{ "EVENT_KEYDOWN_ENTER", EVENT_KEYDOWN_ENTER },
		{ "EVENT_KEYDOWN_BACKSPACE", EVENT_KEYDOWN_BACKSPACE },
		{ "EVENT_KEYDOWN_UP", EVENT_KEYDOWN_UP },
		{ "EVENT_KEYDOWN_DOWN", EVENT_KEYDOWN_DOWN },
		{ "EVENT_KEYDOWN_LEFT", EVENT_KEYDOWN_LEFT },
		{ "EVENT_KEYDOWN_RIGHT", EVENT_KEYDOWN_RIGHT },
		{ "EVENT_KEYDOWN_INSERT", EVENT_KEYDOWN_INSERT },
		{ "EVENT_KEYDOWN_DELETE", EVENT_KEYDOWN_DELETE },
		{ "EVENT_KEYDOWN_HOME", EVENT_KEYDOWN_HOME },
		{ "EVENT_KEYDOWN_END", EVENT_KEYDOWN_END },
		{ "EVENT_KEYDOWN_PAGEUP", EVENT_KEYDOWN_PAGEUP },
		{ "EVENT_KEYDOWN_PAGEDOWN", EVENT_KEYDOWN_PAGEDOWN },
		{ "EVENT_KEYDOWN_LEFTCTRL", EVENT_KEYDOWN_LEFTCTRL },
		{ "EVENT_KEYDOWN_LEFTGUI", EVENT_KEYDOWN_LEFTGUI },
		{ "EVENT_KEYDOWN_LEFTALT", EVENT_KEYDOWN_LEFTALT },
		{ "EVENT_KEYDOWN_LEFTSHIFT", EVENT_KEYDOWN_LEFTSHIFT },
		{ "EVENT_KEYDOWN_RIGHTCTRL", EVENT_KEYDOWN_RIGHTCTRL },
		{ "EVENT_KEYDOWN_RIGHTGUI", EVENT_KEYDOWN_RIGHTGUI },
		{ "EVENT_KEYDOWN_RIGHTALT", EVENT_KEYDOWN_RIGHTALT },
		{ "EVENT_KEYDOWN_RIGHTSHIFT", EVENT_KEYDOWN_RIGHTSHIFT },
		{ "EVENT_KEYDOWN_SPACE", EVENT_KEYDOWN_SPACE },
		{ "EVENT_KEYDOWN_TAB", EVENT_KEYDOWN_TAB },
		{ "EVENT_KEYDOWN_CAPSLOCK", EVENT_KEYDOWN_CAPSLOCK },
		{ "EVENT_KEYDOWN_NUMLOCK", EVENT_KEYDOWN_NUMLOCK },
		{ "EVENT_KEYDOWN_PRINTSCREEN", EVENT_KEYDOWN_PRINTSCREEN },
		{ "EVENT_KEYDOWN_SCROLLLOCK", EVENT_KEYDOWN_SCROLLLOCK },
		{ "EVENT_KEYDOWN_PAUSE", EVENT_KEYDOWN_PAUSE },
		{ "EVENT_KEYDOWN_AUDIOMUTE", EVENT_KEYDOWN_AUDIOMUTE },
		{ "EVENT_KEYDOWN_AUDIOPREV", EVENT_KEYDOWN_AUDIOPREV },
		{ "EVENT_KEYDOWN_AUDIONEXT", EVENT_KEYDOWN_AUDIONEXT },
		{ "EVENT_KEYDOWN_AUDIOPLAY", EVENT_KEYDOWN_AUDIOPLAY },
		{ "EVENT_KEYDOWN_AUDIOSTOP", EVENT_KEYDOWN_AUDIOSTOP },
		{ "EVENT_KEYDOWN_VOLUMEUP", EVENT_KEYDOWN_VOLUMEUP },
		{ "EVENT_KEYDOWN_VOLUMEDOWN", EVENT_KEYDOWN_VOLUMEDOWN },
		{ "EVENT_KEYDOWN_BRIGHTNESSUP", EVENT_KEYDOWN_BRIGHTNESSUP },
		{ "EVENT_KEYDOWN_BRIGHTNESSDOWN", EVENT_KEYDOWN_BRIGHTNESSDOWN },
		{ "EVENT_KEYDOWN_BACKQUOTE", EVENT_KEYDOWN_BACKQUOTE },
		{ "EVENT_KEYDOWN_EXCLAM", EVENT_KEYDOWN_EXCLAM },
		{ "EVENT_KEYDOWN_AT", EVENT_KEYDOWN_AT },
		{ "EVENT_KEYDOWN_HASH", EVENT_KEYDOWN_HASH },
		{ "EVENT_KEYDOWN_DOOLAR", EVENT_KEYDOWN_DOOLAR },
		{ "EVENT_KEYDOWN_CARET", EVENT_KEYDOWN_CARET },
		{ "EVENT_KEYDOWN_AMPERSAND", EVENT_KEYDOWN_AMPERSAND },
		{ "EVENT_KEYDOWN_DBLAMPERSAND", EVENT_KEYDOWN_DBLAMPERSAND },
		{ "EVENT_KEYDOWN_ASTERISK", EVENT_KEYDOWN_ASTERISK },
		{ "EVENT_KEYDOWN_LEFTPAREN", EVENT_KEYDOWN_LEFTPAREN },
		{ "EVENT_KEYDOWN_RIGHTPAREN", EVENT_KEYDOWN_RIGHTPAREN },
		{ "EVENT_KEYDOWN_MINUS", EVENT_KEYDOWN_MINUS },
		{ "EVENT_KEYDOWN_UNDERSCORE", EVENT_KEYDOWN_UNDERSCORE },
		{ "EVENT_KEYDOWN_PLUS", EVENT_KEYDOWN_PLUS },
		{ "EVENT_KEYDOWN_EQUALS", EVENT_KEYDOWN_EQUALS },
		{ "EVENT_KEYDOWN_LEFTBRACKET", EVENT_KEYDOWN_LEFTBRACKET },
		{ "EVENT_KEYDOWN_RIGHTBRACKET", EVENT_KEYDOWN_RIGHTBRACKET },
		{ "EVENT_KEYDOWN_LEFTBRACE", EVENT_KEYDOWN_LEFTBRACE },
		{ "EVENT_KEYDOWN_RIGHTBRACE", EVENT_KEYDOWN_RIGHTBRACE },
		{ "EVENT_KEYDOWN_COLON", EVENT_KEYDOWN_COLON },
		{ "EVENT_KEYDOWN_SEMICOLON", EVENT_KEYDOWN_SEMICOLON },
		{ "EVENT_KEYDOWN_BACKSLASH", EVENT_KEYDOWN_BACKSLASH },
		{ "EVENT_KEYDOWN_QUOTE", EVENT_KEYDOWN_QUOTE },
		{ "EVENT_KEYDOWN_QUOTEDBL", EVENT_KEYDOWN_QUOTEDBL },
		{ "EVENT_KEYDOWN_LESS", EVENT_KEYDOWN_LESS },
		{ "EVENT_KEYDOWN_GREATER", EVENT_KEYDOWN_GREATER },
		{ "EVENT_KEYDOWN_COMMA", EVENT_KEYDOWN_COMMA },
		{ "EVENT_KEYDOWN_PERIOD", EVENT_KEYDOWN_PERIOD },
		{ "EVENT_KEYDOWN_QUESTION", EVENT_KEYDOWN_QUESTION },
		{ "EVENT_KEYDOWN_SLASH", EVENT_KEYDOWN_SLASH },
		{ "EVENT_KEYDOWN_VERTICALBAR", EVENT_KEYDOWN_VERTICALBAR },
		{ "EVENT_KEYDOWN_DBLVERTICALBAR", EVENT_KEYDOWN_DBLVERTICALBAR },
		{ "EVENT_KEYDOWN_WWW", EVENT_KEYDOWN_WWW },
		{ "EVENT_KEYDOWN_EMAIL", EVENT_KEYDOWN_EMAIL },
		{ "EVENT_KEYUP_0", EVENT_KEYUP_0 },
		{ "EVENT_KEYUP_00", EVENT_KEYUP_00 },
		{ "EVENT_KEYUP_000", EVENT_KEYUP_000 },
		{ "EVENT_KEYUP_1", EVENT_KEYUP_1 },
		{ "EVENT_KEYUP_2", EVENT_KEYUP_2 },
		{ "EVENT_KEYUP_3", EVENT_KEYUP_3 },
		{ "EVENT_KEYUP_4", EVENT_KEYUP_4 },
		{ "EVENT_KEYUP_5", EVENT_KEYUP_5 },
		{ "EVENT_KEYUP_6", EVENT_KEYUP_6 },
		{ "EVENT_KEYUP_7", EVENT_KEYUP_7 },
		{ "EVENT_KEYUP_8", EVENT_KEYUP_8 },
		{ "EVENT_KEYUP_9", EVENT_KEYUP_9 },
		{ "EVENT_KEYUP_F1", EVENT_KEYUP_F1 },
		{ "EVENT_KEYUP_F2", EVENT_KEYUP_F2 },
		{ "EVENT_KEYUP_F3", EVENT_KEYUP_F3 },
		{ "EVENT_KEYUP_F4", EVENT_KEYUP_F4 },
		{ "EVENT_KEYUP_F5", EVENT_KEYUP_F5 },
		{ "EVENT_KEYUP_F6", EVENT_KEYUP_F6 },
		{ "EVENT_KEYUP_F7", EVENT_KEYUP_F7 },
		{ "EVENT_KEYUP_F8", EVENT_KEYUP_F8 },
		{ "EVENT_KEYUP_F9", EVENT_KEYUP_F9 },
		{ "EVENT_KEYUP_F10", EVENT_KEYUP_F10 },
		{ "EVENT_KEYUP_F11", EVENT_KEYUP_F11 },
		{ "EVENT_KEYUP_F12", EVENT_KEYUP_F12 },
		{ "EVENT_KEYUP_F13", EVENT_KEYUP_F13 },
		{ "EVENT_KEYUP_F14", EVENT_KEYUP_F14 },
		{ "EVENT_KEYUP_F15", EVENT_KEYUP_F15 },
		{ "EVENT_KEYUP_F16", EVENT_KEYUP_F16 },
		{ "EVENT_KEYUP_F17", EVENT_KEYUP_F17 },
		{ "EVENT_KEYUP_F18", EVENT_KEYUP_F18 },
		{ "EVENT_KEYUP_F19", EVENT_KEYUP_F19 },
		{ "EVENT_KEYUP_F20", EVENT_KEYUP_F20 },
		{ "EVENT_KEYUP_F21", EVENT_KEYUP_F21 },
		{ "EVENT_KEYUP_F22", EVENT_KEYUP_F22 },
		{ "EVENT_KEYUP_F23", EVENT_KEYUP_F23 },
		{ "EVENT_KEYUP_F24", EVENT_KEYUP_F24 },
		{ "EVENT_KEYUP_A", EVENT_KEYUP_A },
		{ "EVENT_KEYUP_B", EVENT_KEYUP_B },
		{ "EVENT_KEYUP_C", EVENT_KEYUP_C },
		{ "EVENT_KEYUP_D", EVENT_KEYUP_D },
		{ "EVENT_KEYUP_E", EVENT_KEYUP_E },
		{ "EVENT_KEYUP_F", EVENT_KEYUP_F },
		{ "EVENT_KEYUP_G", EVENT_KEYUP_G },
		{ "EVENT_KEYUP_H", EVENT_KEYUP_H },
		{ "EVENT_KEYUP_I", EVENT_KEYUP_I },
		{ "EVENT_KEYUP_J", EVENT_KEYUP_J },
		{ "EVENT_KEYUP_K", EVENT_KEYUP_K },
		{ "EVENT_KEYUP_L", EVENT_KEYUP_L },
		{ "EVENT_KEYUP_M", EVENT_KEYUP_M },
		{ "EVENT_KEYUP_N", EVENT_KEYUP_N },
		{ "EVENT_KEYUP_O", EVENT_KEYUP_O },
		{ "EVENT_KEYUP_P", EVENT_KEYUP_P },
		{ "EVENT_KEYUP_Q", EVENT_KEYUP_Q },
		{ "EVENT_KEYUP_R", EVENT_KEYUP_R },
		{ "EVENT_KEYUP_S", EVENT_KEYUP_S },
		{ "EVENT_KEYUP_T", EVENT_KEYUP_T },
		{ "EVENT_KEYUP_U", EVENT_KEYUP_U },
		{ "EVENT_KEYUP_V", EVENT_KEYUP_V },
		{ "EVENT_KEYUP_W", EVENT_KEYUP_W },
		{ "EVENT_KEYUP_X", EVENT_KEYUP_X },
		{ "EVENT_KEYUP_Y", EVENT_KEYUP_Y },
		{ "EVENT_KEYUP_Z", EVENT_KEYUP_Z },
		{ "EVENT_KEYUP_ESC", EVENT_KEYUP_ESC },
		{ "EVENT_KEYUP_ENTER", EVENT_KEYUP_ENTER },
		{ "EVENT_KEYUP_BACKSPACE", EVENT_KEYUP_BACKSPACE },
		{ "EVENT_KEYUP_UP", EVENT_KEYUP_UP },
		{ "EVENT_KEYUP_DOWN", EVENT_KEYUP_DOWN },
		{ "EVENT_KEYUP_LEFT", EVENT_KEYUP_LEFT },
		{ "EVENT_KEYUP_RIGHT", EVENT_KEYUP_RIGHT },
		{ "EVENT_KEYUP_INSERT", EVENT_KEYUP_INSERT },
		{ "EVENT_KEYUP_DELETE", EVENT_KEYUP_DELETE },
		{ "EVENT_KEYUP_HOME", EVENT_KEYUP_HOME },
		{ "EVENT_KEYUP_END", EVENT_KEYUP_END },
		{ "EVENT_KEYUP_PAGEUP", EVENT_KEYUP_PAGEUP },
		{ "EVENT_KEYUP_PAGEDOWN", EVENT_KEYUP_PAGEDOWN },
		{ "EVENT_KEYUP_LEFTCTRL", EVENT_KEYUP_LEFTCTRL },
		{ "EVENT_KEYUP_LEFTGUI", EVENT_KEYUP_LEFTGUI },
		{ "EVENT_KEYUP_LEFTALT", EVENT_KEYUP_LEFTALT },
		{ "EVENT_KEYUP_LEFTSHIFT", EVENT_KEYUP_LEFTSHIFT },
		{ "EVENT_KEYUP_RIGHTCTRL", EVENT_KEYUP_RIGHTCTRL },
		{ "EVENT_KEYUP_RIGHTGUI", EVENT_KEYUP_RIGHTGUI },
		{ "EVENT_KEYUP_RIGHTALT", EVENT_KEYUP_RIGHTALT },
		{ "EVENT_KEYUP_RIGHTSHIFT", EVENT_KEYUP_RIGHTSHIFT },
		{ "EVENT_KEYUP_SPACE", EVENT_KEYUP_SPACE },
		{ "EVENT_KEYUP_TAB", EVENT_KEYUP_TAB },
		{ "EVENT_KEYUP_CAPSLOCK", EVENT_KEYUP_CAPSLOCK },
		{ "EVENT_KEYUP_NUMLOCK", EVENT_KEYUP_NUMLOCK },
		{ "EVENT_KEYUP_PRINTSCREEN", EVENT_KEYUP_PRINTSCREEN },
		{ "EVENT_KEYUP_SCROLLLOCK", EVENT_KEYUP_SCROLLLOCK },
		{ "EVENT_KEYUP_PAUSE", EVENT_KEYUP_PAUSE },
		{ "EVENT_KEYUP_AUDIOMUTE", EVENT_KEYUP_AUDIOMUTE },
		{ "EVENT_KEYUP_AUDIOPREV", EVENT_KEYUP_AUDIOPREV },
		{ "EVENT_KEYUP_AUDIONEXT", EVENT_KEYUP_AUDIONEXT },
		{ "EVENT_KEYUP_AUDIOPLAY", EVENT_KEYUP_AUDIOPLAY },
		{ "EVENT_KEYUP_AUDIOSTOP", EVENT_KEYUP_AUDIOSTOP },
		{ "EVENT_KEYUP_VOLUMEUP", EVENT_KEYUP_VOLUMEUP },
		{ "EVENT_KEYUP_VOLUMEDOWN", EVENT_KEYUP_VOLUMEDOWN },
		{ "EVENT_KEYUP_BRIGHTNESSUP", EVENT_KEYUP_BRIGHTNESSUP },
		{ "EVENT_KEYUP_BRIGHTNESSDOWN", EVENT_KEYUP_BRIGHTNESSDOWN },
		{ "EVENT_KEYUP_BACKQUOTE", EVENT_KEYUP_BACKQUOTE },
		{ "EVENT_KEYUP_EXCLAM", EVENT_KEYUP_EXCLAM },
		{ "EVENT_KEYUP_AT", EVENT_KEYUP_AT },
		{ "EVENT_KEYUP_HASH", EVENT_KEYUP_HASH },
		{ "EVENT_KEYUP_DOOLAR", EVENT_KEYUP_DOOLAR },
		{ "EVENT_KEYUP_CARET", EVENT_KEYUP_CARET },
		{ "EVENT_KEYUP_AMPERSAND", EVENT_KEYUP_AMPERSAND },
		{ "EVENT_KEYUP_DBLAMPERSAND", EVENT_KEYUP_DBLAMPERSAND },
		{ "EVENT_KEYUP_ASTERISK", EVENT_KEYUP_ASTERISK },
		{ "EVENT_KEYUP_LEFTPAREN", EVENT_KEYUP_LEFTPAREN },
		{ "EVENT_KEYUP_RIGHTPAREN", EVENT_KEYUP_RIGHTPAREN },
		{ "EVENT_KEYUP_MINUS", EVENT_KEYUP_MINUS },
		{ "EVENT_KEYUP_UNDERSCORE", EVENT_KEYUP_UNDERSCORE },
		{ "EVENT_KEYUP_PLUS", EVENT_KEYUP_PLUS },
		{ "EVENT_KEYUP_EQUALS", EVENT_KEYUP_EQUALS },
		{ "EVENT_KEYUP_LEFTBRACKET", EVENT_KEYUP_LEFTBRACKET },
		{ "EVENT_KEYUP_RIGHTBRACKET", EVENT_KEYUP_RIGHTBRACKET },
		{ "EVENT_KEYUP_LEFTBRACE", EVENT_KEYUP_LEFTBRACE },
		{ "EVENT_KEYUP_RIGHTBRACE", EVENT_KEYUP_RIGHTBRACE },
		{ "EVENT_KEYUP_COLON", EVENT_KEYUP_COLON },
		{ "EVENT_KEYUP_SEMICOLON", EVENT_KEYUP_SEMICOLON },
		{ "EVENT_KEYUP_BACKSLASH", EVENT_KEYUP_BACKSLASH },
		{ "EVENT_KEYUP_QUOTE", EVENT_KEYUP_QUOTE },
		{ "EVENT_KEYUP_QUOTEDBL", EVENT_KEYUP_QUOTEDBL },
		{ "EVENT_KEYUP_LESS", EVENT_KEYUP_LESS },
		{ "EVENT_KEYUP_GREATER", EVENT_KEYUP_GREATER },
		{ "EVENT_KEYUP_COMMA", EVENT_KEYUP_COMMA },
		{ "EVENT_KEYUP_PERIOD", EVENT_KEYUP_PERIOD },
		{ "EVENT_KEYUP_QUESTION", EVENT_KEYUP_QUESTION },
		{ "EVENT_KEYUP_SLASH", EVENT_KEYUP_SLASH },
		{ "EVENT_KEYUP_VERTICALBAR", EVENT_KEYUP_VERTICALBAR },
		{ "EVENT_KEYUP_DBLVERTICALBAR", EVENT_KEYUP_DBLVERTICALBAR },
		{ "EVENT_KEYUP_WWW", EVENT_KEYUP_WWW },
		{ "EVENT_KEYUP_EMAIL", EVENT_KEYUP_EMAIL },

		{ "EVENT_TEXTINPUT", EVENT_TEXTINPUT },
	};
}


int Get2ndLevelValue(int firstLevelKey)
{
	switch (firstLevelKey)
	{
	case SDL_MOUSEBUTTONDOWN:
	case SDL_MOUSEBUTTONUP:
		return event.button.button;
	case SDL_KEYDOWN:
	case SDL_KEYUP:
		return event.key.keysym.sym;
	case SDL_WINDOWEVENT:
		return event.window.event;
	default:
		return 0;
	}
}


ETHER_API getCursorPosition(lua_State * L)
{
	lua_newtable(L);
	lua_pushstring(L, "x");
	lua_pushnumber(L, event.motion.x);
	lua_settable(L, -3);
	lua_pushstring(L, "y");
	lua_pushnumber(L, event.motion.y);
	lua_settable(L, -3);
	return 1;
}


ETHER_API getScrollValue(lua_State * L)
{
	lua_pushnumber(L, event.wheel.x);
	lua_pushnumber(L, event.wheel.y);
	return 2;
}


ETHER_API startTextInput(lua_State* L)
{
	SDL_StartTextInput();
	return 0;
}


ETHER_API stopTextInput(lua_State* L)
{
	SDL_StopTextInput();
	return 0;
}


ETHER_API getInputText(lua_State* L)
{
	lua_pushstring(L, event.text.text);
	return 1;
}


ETHER_API updateEvent(lua_State * L)
{
	lua_pushboolean(L, SDL_PollEvent(&event));

	return 1;
}


ETHER_API getEventType(lua_State * L)
{
	auto itorSingle = ModuleInteractivity::mapSingleEventList.find(event.type);
	if (itorSingle != ModuleInteractivity::mapSingleEventList.end())
		lua_pushnumber(L, itorSingle->second);
	else
	{
		auto itorMutli = ModuleInteractivity::mapMultiEventList.find(event.type);
		if (itorMutli != ModuleInteractivity::mapMultiEventList.end())
		{
			auto _iterator = itorMutli->second.find(Get2ndLevelValue(itorMutli->first));
			_iterator != itorMutli->second.end() ? lua_pushnumber(L, _iterator->second) : lua_pushnil(L);
		}
		else
			lua_pushnil(L);
	}

	return 1;
}