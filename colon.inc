%define begin 0			;последний элемент списка должен ссылаться на 0

;%1 ключ словаря (в кавычках)
;%2 имя метки

%macro colon 2
	%2:			;метка для текущего элемента
	%%next: dq begin	;метка для адрес следующего элемента
	db %1, 0		;сохраняем ключ нашего словаря, как нуль-терминированную строку
	%define begin %%next	;определяем begin чтобы "указывать" на первый эл нашего списка
%endmacro
		             