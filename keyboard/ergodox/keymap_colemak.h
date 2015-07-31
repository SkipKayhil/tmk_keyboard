static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Colemak
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   ~    |   1  |   2  |   3  |   4  |   5  |  Esc |           | LGui |   6  |   7  |   8  |   9  |   0  |   Del  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |   Tab  |   Q  |   W  |   E  |   R  |   T  |  [   |           |   ]  |   Y  |   U  |   I  |   O  |   P  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Caps  |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------|  +   |           |  -   |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  F1  |  F2  |  F3  |  F4  |  F5  |                                       | Play | Next | Mute | Vol- | Vol+ |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  Up  | Down |       | Left | Right|
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | F13  |       | PgUp |      |      |
     *                                 | LAlt | Space|------|       |------| Enter| BkSp |
     *                                 |      |      | Ctrl |       |  ~L1 |      |      |
     *                                 `--------------------'       `--------------------'
     */
	KEYMAP( // Layer 0: Default
		// Left Hand
	    GRV, 1,   2,   3,   4,   5,   ESC,
	    TAB, Q,   W,   E,   R,   T,   LBRC,
	    CAPS,A,   S,   D,   F,   G,
	    LSFT,Z,   X,   C,   V,   B,   EQL,
	    F1,  F2,  F3,  F4,  F5,
	                                    UP, DOWN,
	                                         F13,
	                             LALT, SPC, LCTL,
	    // Right Hand
		    LGUI, 6,   7,   8,   9,      0,   DEL,
		    RBRC, Y,   U,   I,   O,      P,   BSLS,
		          H,   J,   K,   L,   SCLN,	  QUOT,
		    MINS, N,   M,   COMM,DOT, SLSH,   RSFT,
		               MPLY,MNXT,MUTE,VOLD,	  VOLU,
	    LEFT, RGHT,
	    PGUP,
	    FN0,  ENT, BSPC
	),
     /* Layer 3: Function and Media Keys
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | TRNS   |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | TRNS   |      |      |      |      |      | TRNS |           | TRNS |      |      |      |      |      |    TRNS|
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |PrScn |  Ins |      |                                       |Prev.T|VolDn |VolUp |Next T|      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | TRNS | TRNS |       | TRNS | TRNS |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------| Mute | Play |
     *                                 |      |      |      |       |      |      | Pause|
     *                                 `--------------------'       `--------------------'
     */
	KEYMAP( // Layer 1: Function Keys
		// Left Hand
	     TRNS, F1,  F2,  F3,  F4,  F5,  TRNS,
	     TRNS, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
	     TRNS, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
	     TRNS, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
	     TRNS, TRNS, TRNS, TRNS, TRNS,
	                                  TRNS, TRNS,
	                                      TRNS,
	                              TRNS, TRNS, TRNS,
	    // Right Hand
		     TRNS,  F6,  F7,  F8, F9, F10, TRNS,
		     TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
		          TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
		     TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,  TRNS,
		             TRNS, TRNS, TRNS, TRNS,  TRNS,
	    TRNS, TRNS,
	    TRNS,
	    TRNS, TRNS, TRNS
	),
};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

static const uint16_t PROGMEM fn_actions[] = {
	ACTION_LAYER_MOMENTARY(1), // Hold for Function Layer
	ACTION_FUNCTION(TEENSY_KEY) // Teensy
};


void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    //print("action_function called\n");
    //print("id  = "); phex(id); print("\n");
    //print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}
