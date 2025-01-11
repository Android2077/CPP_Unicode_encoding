Это класс реализуюший некоторые методы работы с Юникодом.

Доступные методы:

`-check__UnicodePointCode                           -Функция проверяет корректность значения Юникодного символа: по сути внутри только две проверки - не входит ли значение в диапазон Суррогатной пары, и не выходит ли значение за пределы максимального значения Юникода.  `

-check__UTF8symv&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-Функция проверяет на корректность один единственный символ UTF-8. Данная функция не проверяет символ UTF-8 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод. Если нужная данная проверка, то использовать функцию "check__UTF8symv_SurrogatePair"   
-check__UTF8symv_SurrogatePair&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-Функция проверяет на корректность один единственный символ UTF-8.Так же дополнительно происходит проверка символа UTF-8 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.  
-check_UTF8_string&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-Данная функция проверят строку с символами UTF-8 с заданным размером на корректность кодировки UTF-8. Данная функция не проверяет символы UTF-8 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод. Если нужная данная проверка, то использовать функцию "check__UTF8_string_SurrogatePair"    
-check__UTF8_string_SurrogatePair&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-Данная функция проверят строку с символами UTF-8 с заданным размером на корректность кодировки UTF-8. Так же дополнительно происходит проверка символа UTF-8 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.  

-get__UTF8symv_ByteSize
-get__UTF8SymvsNumbers

-convert__UTF8Symv_to_UnicodePointCode
-convert__UTF8_String_to_Vec_UnicodePointCode
-convert__UTF8_String_to_Vec_UnicodePointCode__NotDuplicated
-convert__UTF8_String_to_Vec_UnicodePointCode__Info
-convert__SpecificNumPos_UTF8Symv_in_String_to_UnicodePointCode__Info
-convert__UnicodePointCode_to_UTF8Symv
-convert__Vec_UnicodePointCode_to_Vec_UTF8
-convert__Vec_UnicodePointCode_to_String_UTF8

-check_UTF16symvLE
-check__UTF16symvLE_SurrogatePair
-check_UTF16LE_string

-get__UTF16symvLE_PairSize
-get_UTF16SymvsLENumbers

-convert__UTF16SymvLE_to_UnicodePointCode
-convert__UTF16LE_String_to_Vec_UnicodePointCode
-convert__UTF16LE_String_to_Vec_UnicodePointCode__NotDuplicated
-convert__UTF16LE_String_to_Vec_UnicodePointCode__Info
-convert__SpecificNumPos_UTF16SymvLE_in_String_to_UnicodePointCode__Info
-convert__UnicodePointCode_to_UTF16SymvLE
-convert__Vec_UnicodePointCode_to_Vec_UTF16LE
-convert__Vec_UnicodePointCode_to_String_UTF16LE

-Convert_from_UTF8_to_UTF16LE_OneSymv
-Convert_from_UTF16LE_to_UTF8_OneSymv
-Convert_from_UTF8_to_UTF16LE
-Convert_from_UTF16LE_to_UTF8

Примеры использования методов и более детальное опинсание смотреть в main.cpp
