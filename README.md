PSEUDOCODE

BEGIN
        DECLARE format String variable(char *str)
        SET loop (condition: character in string- str[i] is not NULL('\0')
	SET up variadic input as var_in
	IF str[i] = '%'
	DECLARE count integer(int count)
	SWITCH next character in str
        	CASE 'i':
			print_int(next in var_in)
			INCREASE count by 1;
        	CASE 'c':
			print_char(next in var_in)
			INCREASE cont by 1;
		CASE 'f':
			print_float(next in var_in)
			INCREASE count by 1;
		CASE '...':
			print_...(next in var_in)
			INCREASE count by ...;
	Set i to i = count
	IF str[i] = '\'
		print_special_character
	Else
		print str[i]
	END loop
END program
