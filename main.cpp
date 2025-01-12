#include <iostream>
#include <string>
#include <vector>


#include "Unicode__class.h"




int main()
{


	//*********************************************************************************Unicode__class:Начало***************************************************************************************************
	

	Unicode__class Unicode__class_;

	//Доступные Методы:

	//  - check__UnicodePointCode - Функция проверяет корректность значения Юникодного символа : по сути внутри только две проверки - не входит ли значение в диапазон Суррогатной пары, и не выходит ли значение за пределы максимального значения Юникода.

	//	- check__UTF8symv - Функция проверяет на корректность один единственный символ UTF - 8. Данная функция не проверяет символ UTF - 8 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.Если нужная данная проверка, то использовать функцию "check__UTF8symv_SurrogatePair"
	//	- check__UTF8symv_SurrogatePair - Функция проверяет на корректность один единственный символ UTF - 8.Так же дополнительно происходит проверка символа UTF - 8 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.
	//	- check_UTF8_string - Функция проверят строку с символами UTF - 8 с заданным размером на корректность кодировки UTF - 8. Данная функция не проверяет символы UTF - 8 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.Если нужная данная проверка, то использовать функцию "check__UTF8_string_SurrogatePair"
	//	- check__UTF8_string_SurrogatePair - Функция проверят строку с символами UTF - 8 с заданным размером на корректность кодировки UTF - 8. Так же дополнительно происходит проверка символа UTF - 8 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.
	//	- get__UTF8symv_ByteSize - Функция возврашает размер в байтах UTF - 8 символа.
	//	- get__UTF8SymvsNumbers - Функция возврашает кол - во UTF - 8 символов в указанной строке с заданным размером.

	//	- convert__UTF8Symv_to_UnicodePointCode - Фунция конвертирует символ в кодировке UTF - 8 в значение Юникода.
	//	- convert__UTF8_String_to_Vec_UnicodePointCode - Фунция конвертирует строку с символами в кодировке UTF - 8 заданного размера в вектор значений Юникода.
	//	- convert__UTF8_String_to_Vec_UnicodePointCode__NotDuplicated - Фунция конвертирует строку с символами в кодировке UTF - 8 заданного размера в вектор значений Юникода И ЕСЛИ в строке есть повторяющиеся символы, то не заносит потовряющиеся символы в вектор результата, вообщем без Дубликатов символов.
	//	- convert__UTF8_String_to_Vec_UnicodePointCode__Info - Функция собирает "информацию" о UTF8 символах в указанной строке в указанных размерах.
	//	- convert__SpecificNumPos_UTF8Symv_in_String_to_UnicodePointCode__Info - Функция собирает "информацию" о UTF8 символах в указанной строке в указанных размерах.
	//	- convert__UnicodePointCode_to_UTF8Symv - Функция преобразовывает значение Юникодного символа в симмвол в кодировке UTF - 8.
	//	- convert__Vec_UnicodePointCode_to_Vec_UTF8 - Функция преобразовывает вектор значений Юникодных символов в вектор симмвол в кодировке UTF - 8.
	//	- convert__Vec_UnicodePointCode_to_String_UTF8 - Функция преобразовывает вектор значений Юникодных символов в Строку симмволов в кодировке UTF - 8.

	//	- check_UTF16symvLE - Функция проверяет на корректность один единственный символ UTF - 16. Данная функция не проверяет символ UTF - 16 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.Если нужная данная проверка, то использовать функцию "check__UTF16symvLE_SurrogatePair"
	//	- check__UTF16symvLE_SurrogatePair - Функция проверяет на корректность один единственный символ UTF - 16.Так же дополнительно происходит проверка символа UTF - 16 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.
	//	- check_UTF16LE_string - Данная функция проверят строку с символами UTF - 16 с заданным размером на корректность кодировки UTF - 16. Данная функция не проверяет символы UTF - 16 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.Если нужная данная проверка, то использовать функцию "check__UTF16_string_SurrogatePair"
	//	- get__UTF16symvLE_PairSize - Функция возврашает размер в парах UTF - 16 символа.
	//	- get__UTF16SymvsLENumbers - Функция возврашает кол - во UTF - 16 символов в указанной строке с заданным размером.

	//	- convert__UTF16SymvLE_to_UnicodePointCode - Фунция конвертирует символ в кодировке UTF - 16 в значение Юникода.
	//	- convert__UTF16LE_String_to_Vec_UnicodePointCode - Фунция конвертирует строку с символами в кодировке UTF - 8 заданного размера в вектор значений Юникода.
	//	- convert__UTF16LE_String_to_Vec_UnicodePointCode__NotDuplicated - Фунция конвертирует строку с символами в кодировке UTF - 16 заданного размера в вектор значений Юникода И ЕСЛИ в строке есть повторяющиеся символы, то не заносит потовряющиеся символы в вектор результата, вообщем без Дубликатов символов.
	//	- convert__UTF16LE_String_to_Vec_UnicodePointCode__Info - Функция собирает "информацию" о UTF16 символах в указанной строке в указанных размерах.
	//	- convert__SpecificNumPos_UTF16SymvLE_in_String_to_UnicodePointCode__Info - Функция собирает "информацию" о UTF16 символах в указанной строке в указанных размерах.
	//	- convert__UnicodePointCode_to_UTF16SymvLE - Функция преобразовывает значение Юникодного символа в симмвол в кодировке UTF - 16.
	//	- convert__Vec_UnicodePointCode_to_Vec_UTF16LE - Функция преобразовывает вектор значений Юникодных символов в вектор симмвол в кодировке UTF - 16.
	//	- convert__Vec_UnicodePointCode_to_String_UTF16LE - Функция преобразовывает вектор значений Юникодных символов в Строку симмволов в кодировке UTF - 16.

	//	- Convert_from_UTF8_to_UTF16LE_OneSymv - Функция преобразовывает Один символ в кодировке UTF8 в символ в кодировке UTF16(little - endian).
	//	- Convert_from_UTF16LE_to_UTF8_OneSymv - Функция преобразовывает Один символ в кодировке UTF16(little - endian) в символ в кодировке UTF - 8.
	//	- Convert_from_UTF8_to_UTF16LE - Функция преобразовывает строку символов в кодировке UTF - 8 в сроку символ в кодировке UTF16(little - endian).
	//	- Convert_from_UTF16LE_to_UTF8 - Функция преобразовывает строку символов в кодировке UTF16 в сроку символ в кодировке UTF8.



    //----------------------------------------------------------------------------1-check__UnicodePointCode:Начало---------------------------------------------------------------------------------

    //Функция проверяет корректность значения Юникодного символа: по сути внутри только две проверки - не входит ли значение в диапазон Суррогатной пары, и не выходит ли значение за пределы максимального значения Юникода.

     Unicode__class::result_flag result_1;


	 //-----------------------------------------------------------------------------------
	 int_least32_t UnicodeCodePoint_1 = 50;                                                    //Значение Юникодного символа в десятичной системе.

	 std::vector<int_least32_t>vec__UnicodeCodePoint_1_0 = {0,1,10,67,450};                    //Вектор Значений Юникодных символов в десятичной системе.
	
	 std::vector<int_least32_t>vec__UnicodeCodePoint_1_1 = { 0,1,10,67,55298, 450};            //Вектор Значений Юникодных символов в десятичной системе.
	
	 size_t NumPos_Incorrect;                                                                  //Сюда в случае неуспешной проверки функция занесет номера элемента вектора, в котором есть некорректное значение Юникодного символа.
	 //-----------------------------------------------------------------------------------


	 //--------------------------------Пример_1:--------------------------------------------
	 result_1 = Unicode__class_.check__UnicodePointCode(UnicodeCodePoint_1);

	 if (result_1 != Unicode__class::result_flag::OK)
	 {
		 std::cout << "result_error_1: UnicodePointCode:" << UnicodeCodePoint_1 << " - Incorrect" << std::endl;
		 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
	 }
	 else
	 {
		 std::cout << "result_1: UnicodePointCode:" << UnicodeCodePoint_1 << " - Correct" << std::endl;
	 }
	 //-----------------------------------------------------------------------------------



	 //--------------------------------Пример_2:--------------------------------------------
	 result_1 = Unicode__class_.check__UnicodePointCode(vec__UnicodeCodePoint_1_0);

	 if (result_1 != Unicode__class::result_flag::OK)
	 {
		 std::cout << "result_error_1: Vector contains an Incorrect UnicodePointCode" << std::endl;
		 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
	 }
	 else
	 {
		 std::cout << "result_1: All UnicodePointCode Correct" << std::endl;
	 }
	 //-----------------------------------------------------------------------------------


	 //--------------------------------Пример_3:-------------------------------------------
	 result_1 = Unicode__class_.check__UnicodePointCode(vec__UnicodeCodePoint_1_1, NumPos_Incorrect);

	 if (result_1 != Unicode__class::result_flag::OK)
	 {
		 std::cout << "result_error_1: Vector contains an Incorrect UnicodePointCode: " << vec__UnicodeCodePoint_1_1[NumPos_Incorrect] << std::endl;
		 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
	 }
	 else
	 {
		 std::cout << "result_1: All UnicodePointCode Correct" << std::endl;
	 }
	 //-----------------------------------------------------------------------------------



	 
	 //----------------------------------------------------------------------------1-check__UnicodePointCode:Конец---------------------------------------------------------------------------------






	 //------------------------------------------------------------------------------2-check__UTF8symv:Начало----------------------------------------------------------------------------------------

	 //Функция проверяет на корректность один единственный символ UTF-8. Данная функция не проверяет символ UTF-8 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод. Если нужная данная проверка, то использовать функцию "check__UTF8symv_SurrogatePair"


	 Unicode__class::result_flag result_2;

	 std::string stringUTF8_2_1 = u8"WД𠀅东";

	 //---------------------------------------------------------------------
	 const char* pointer_to_begin_UTF8_symv_2_1 = &stringUTF8_2_1[1];                    //Указатель на начало символа в кодировке UTF-8
	
	 const size_t UTF8Symv_size_2               = 2;                                     //Размер в байтах UTF-8 символа на который указывает указатель "pointer_to_begin_UTF8_symv_2_1", размер может быть больше самого размера симмвола, !!НО конечно же НЕ БОЛЬШЕ, чем доступная память по данному указателю!!, НО размер НЕ ДОЛЖЕН быть меньше размера UTF-8 символа, иначе в этом случае будет код возврата "size_not_enough_for_analysis".
   //const size_t UTF8Symv_size_2               = &stringUTF8_2_1[stringUTF8_2_1.size()-1] - pointer_to_begin_UTF8_symv_2_1 + 1;    //Или так. Указываем оставшиеся байты до конца доступной нам памяти начиная от указателя "pointer_to_begin_UTF8_symv_2_1" котоырй указывает на проверяемый символ.
	 
	 const char* pointer_to_IncorrectByte_2;                                             //В случае если проверка завершилась неудачно и функция наткнулась на некорректный байт, который не соответсвует кодировке UTF-8, то то функция сюда поместить указатель на этот некорректный байт.
	 //---------------------------------------------------------------------



	 //--------------------------------Пример_1:---------------------------------
	 result_2 = Unicode__class_.check__UTF8symv(pointer_to_begin_UTF8_symv_2_1, UTF8Symv_size_2);


	 if (result_2 != Unicode__class::result_flag::OK)
	 {
		 if (result_2 == Unicode__class::result_flag::UTF8_incorrect)
		 {
			 std::cout << "result_error_2: UTF8 Incorrect" << std::endl;
			 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		 }
		 else
		 {
			 if (result_2 == Unicode__class::result_flag::size_not_enough_for_analysis)
			 {
				 std::cout << "result_error_2: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-8 символа, но последующий анализ байт UTF-8 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-8 символ состоящий из 4 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-8 символу, НО так как размер UTF-8 символа занимает 4 байта, то у функции не хватает данных для полного анализа UTF-8 символа.
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
		 }
	 }
	 else
	 {
		 std::cout << "result_2: UTF8 Correct" << std::endl;
	 }
	 //---------------------------------------------------------------------



	 //--------------------------------Пример_2:----------------------------------
	 std::string stringUTF8_2_2 = u8"𠀅";  stringUTF8_2_2.resize(1); stringUTF8_2_2.append("any");  //Сделаем пример некорректной последовательности UTF-8: То есть первый байт будет от корректного UTF-8 символа "𠀅", в котором будет информация о том, что данный символ знаимает 4 байта, а потом три байта этого символа заменяем на условно случайные байты, которые "портят" последуюшие служеюбные биты UTF-8. То есть во первых функция вернет результат "UTF8_incorrect", и во воторых поместить указатель на некорректный символ - указываюший на второй байт.


	 result_2 = Unicode__class_.check__UTF8symv(&stringUTF8_2_2[0], 4, &pointer_to_IncorrectByte_2);


	 if (result_2 != Unicode__class::result_flag::OK)
	 {
		 if (result_2 == Unicode__class::result_flag::UTF8_incorrect)
		 {
			 std::cout << "result_error_2: UTF8 Incorrect:" << pointer_to_IncorrectByte_2 << std::endl;
			 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		 }
		 else
		 {
			 if (result_2 == Unicode__class::result_flag::size_not_enough_for_analysis)
			 {
				 std::cout << "result_error_2: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-8 символа, но последующий анализ байт UTF-8 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-8 символ состоящий из 4 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-8 символу, НО так как размер UTF-8 символа занимает 4 байта, то у функции не хватает данных для полного анализа UTF-8 символа.
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
		 }
	 }
	 else
	 {
		 std::cout << "result_2: UTF8 Correct" << std::endl;
	 }
	 //---------------------------------------------------------------------




     //------------------------------------------------------------------------------2-check__UTF8symv:Конец----------------------------------------------------------------------------------------






	 //-------------------------------------------------------------------------3-check__UTF8symv_SurrogatePair:Начало----------------------------------------------------------------------------------------

	 //Функция проверяет на корректность один единственный символ UTF-8.Так же дополнительно происходит проверка символа UTF-8 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.
	 //Данная функция делает все тоже самое, что и "check__UTF8symv" - только с дополнительной проверкой на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.


	 Unicode__class::result_flag result_3;

	 std::string stringUTF8_3_1 = u8"WД𠀅东";

	 //---------------------------------------------------------------------
	 const char* pointer_to_begin_UTF8_symv_3_1 = &stringUTF8_3_1[1];                    //Указатель на начало символа в кодировке UTF-8

	 const size_t UTF8Symv_size_3               = 2;                                     //Размер в байтах UTF-8 символа на который указывает указатель "pointer_to_begin_UTF8_symv_3_1", размер может быть больше самого размера симмвола, !!НО конечно же НЕ БОЛЬШЕ, чем доступная память по данному указателю!!, НО размер НЕ ДОЛЖЕН быть меньше размера UTF-8 символа, иначе в этом случае будет код возврата "size_not_enough_for_analysis".
   //const size_t UTF8Symv_size_2               = &stringUTF8_2_1[stringUTF8_2_1.size()-1] - pointer_to_begin_UTF8_symv_2_1 + 1;    //Или так. Указываем оставшиеся байты до конца доступной нам памяти начиная от указателя "pointer_to_begin_UTF8_symv_2_1" котоырй указывает на проверяемый символ.

	 const char* pointer_to_IncorrectByte_3;                                             //В случае если проверка завершилась неудачно и функция наткнулась на некорректный байт, который не соответсвует кодировке UTF-8, то то функция сюда поместить указатель на этот некорректный байт.
	 //---------------------------------------------------------------------



	 //--------------------------------Пример_1:---------------------------------
	 result_3 = Unicode__class_.check__UTF8symv(pointer_to_begin_UTF8_symv_3_1, UTF8Symv_size_3);


	 if (result_3 != Unicode__class::result_flag::OK)
	 {
		 if (result_3 == Unicode__class::result_flag::UTF8_incorrect)
		 {
			 std::cout << "result_error_3: UTF8 Incorrect" << std::endl;
			 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		 }
		 else
		 {
			 if (result_3 == Unicode__class::result_flag::size_not_enough_for_analysis)
			 {
				 std::cout << "result_error_3: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-8 символа, но последующий анализ байт UTF-8 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-8 символ состоящий из 4 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-8 символу, НО так как размер UTF-8 символа занимает 4 байта, то у функции не хватает данных для полного анализа UTF-8 символа.
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
			 else if(result_3 == Unicode__class::result_flag::Greater_than_MaxUnicodeValue)
			 {
				 std::cout << "result_error_3: Greater_than_MaxUnicodeValue" << std::endl;
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
			 else if (result_3 == Unicode__class::result_flag::IncludeSurrogatePairValue)
			 {
					 std::cout << "result_error_3: IncludeSurrogatePairValue" << std::endl;
					 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
		 }
	 }
	 else
	 {
		 std::cout << "result_3: UTF8 Correct" << std::endl;
	 }
	 //---------------------------------------------------------------------



	 //--------------------------------Пример_2:----------------------------------
	 std::string stringUTF8_3_2 = u8"𠀅";  stringUTF8_3_2.resize(1); stringUTF8_3_2.append("any");  //Сделаем пример некорректной последовательности UTF-8: То есть первый байт будет от корректного UTF-8 символа "𠀅", в котором будет информация о том, что данный символ знаимает 4 байта, а потом три байта этого символа заменяем на условно случайные байты, которые "портят" последуюшие служеюбные биты UTF-8. То есть во первых функция вернет результат "UTF8_incorrect", и во воторых поместить указатель на некорректный символ - указываюший на второй байт.


	 result_3 = Unicode__class_.check__UTF8symv(&stringUTF8_3_2[0], 4, &pointer_to_IncorrectByte_3);


	 if (result_3 != Unicode__class::result_flag::OK)
	 {
		 if (result_3 == Unicode__class::result_flag::UTF8_incorrect)
		 {
			 std::cout << "result_error_3: UTF8 Incorrect:" << pointer_to_IncorrectByte_3 << std::endl;
			 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		 }
		 else
		 {
			 if (result_3 == Unicode__class::result_flag::size_not_enough_for_analysis)
			 {
				 std::cout << "result_error_3: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-8 символа, но последующий анализ байт UTF-8 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-8 символ состоящий из 4 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-8 символу, НО так как размер UTF-8 символа занимает 4 байта, то у функции не хватает данных для полного анализа UTF-8 символа.
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
			 else if (result_3 == Unicode__class::result_flag::Greater_than_MaxUnicodeValue)
			 {
				 std::cout << "result_error_3: Greater_than_MaxUnicodeValue" << std::endl;
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
			 else if (result_3 == Unicode__class::result_flag::IncludeSurrogatePairValue)
			 {
				 std::cout << "result_error_3: IncludeSurrogatePairValue" << std::endl;
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
		 }
	 }
	 else
	 {
		 std::cout << "result_3: UTF8 Correct" << std::endl;
	 }
	 //---------------------------------------------------------------------



	 //-------------------------------------------------------------------------3-check__UTF8symv_SurrogatePair:Конец----------------------------------------------------------------------------------------





	 //------------------------------------------------------------------------------4-check_UTF8_string:Начало----------------------------------------------------------------------------------------

	 //Данная функция проверят строку с символами UTF-8 с заданным размером на корректность кодировки UTF-8. Данная функция не проверяет символы UTF-8 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод. Если нужная данная проверка, то использовать функцию "check__UTF8_string_SurrogatePair"

	 Unicode__class::result_flag result_4;

	 std::string stringUTF8_4_1 = u8"WД𠀅东";

	 //------------------------------------------------------
	 const char* pointer_to_Begin_String_UTF8_4 = &stringUTF8_4_1[0];            //Указатель на начало UTF-8 символа, в строке символов, которые нужно проверить на корректность.

	 size_t StringUTF8_Size_4                   = stringUTF8_4_1.size();         //Размер в байтах строки в пределах которой нужно проверить UTF-8 символы на корректность.
	
	 const char* pointer_to_IncorrectByte_4;                                     //В случае если проверка завершилась неудачно и функция наткнулась на некорректный байт, который не соответсвует кодировке UTF-8, то то функция сюда поместить указатель на этот некорректный байт.
	 //------------------------------------------------------



	 //------------------------------------ПРИМЕР_1:-------------------------------------------------
	 result_4 = Unicode__class_.check_UTF8_string(pointer_to_Begin_String_UTF8_4, StringUTF8_Size_4);

	 if (result_4 != Unicode__class::result_flag::OK)
	 {
		 if (result_4 == Unicode__class::result_flag::UTF8_incorrect)
		 {
			 std::cout << "result_error_4: UTF8 Incorrect" << std::endl;                 //Значит в строке в пределах указанного размера - есть какой то некорректный UTF-8 символ.
			 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		 }
		 else
		 {
			 if (result_4 == Unicode__class::result_flag::size_not_enough_for_analysis)
			 {
				 std::cout << "result_error_4: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-8 символа, но последующий анализ байт UTF-8 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-8 символ состоящий из 4 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-8 символу, НО так как размер UTF-8 символа занимает 4 байта, то у функции не хватает данных для полного анализа UTF-8 символа.
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
		 }
	 }
	 else
	 {
		 std::cout << "result_4: UTF8 Correct" << std::endl;
	 }
	 //---------------------------------------------------------------------------------------------



	 //------------------------------------ПРИМЕР_2:-------------------------------------------------
	 std::string stringUTF8_4_2 = u8"WД𠀅1"; stringUTF8_4_2[4] = '1';  //Сделаем пример некорректной последовательности UTF-8: В иероглифе "𠀅", который состоит из 4 байт, "испортим" второй байт. Тогда во первых функция вернет результат "UTF8_incorrect", и во воторых поместить указатель на некорректный символ - указываюший на некоректный байт.

	 
	 result_4 = Unicode__class_.check_UTF8_string(stringUTF8_4_2.c_str(), stringUTF8_4_2.size(), &pointer_to_IncorrectByte_4);

	 if (result_4 != Unicode__class::result_flag::OK)
	 {
		 if (result_4 == Unicode__class::result_flag::UTF8_incorrect)
		 {
			 std::cout << "result_error_4: UTF8 Incorrect:" << pointer_to_IncorrectByte_4 << std::endl;          //Значит в строке в пределах указанного размера - есть какой то некорректный UTF-8 символ.
			 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		 }
		 else
		 {
			 if (result_4 == Unicode__class::result_flag::size_not_enough_for_analysis)
			 {
				 std::cout << "result_error_4: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-8 символа, но последующий анализ байт UTF-8 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-8 символ состоящий из 4 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-8 символу, НО так как размер UTF-8 символа занимает 4 байта, то у функции не хватает данных для полного анализа UTF-8 символа.
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
		 }
	 }
	 else
	 {
		 std::cout << "result_4: UTF8 Correct" << std::endl;
	 }
	 //--------------------------------------------------------------------------------------------


	 //------------------------------------------------------------------------------4-check_UTF8_string:Конец----------------------------------------------------------------------------------------







	 //-------------------------------------------------------------------------5-check__UTF8_string_SurrogatePair:Начало----------------------------------------------------------------------------------------

	  //Данная функция проверят строку с символами UTF-8 с заданным размером на корректность кодировки UTF-8. Так же дополнительно происходит проверка символа UTF-8 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.
	  //Данная функция делает все тоже самое, что и "check_UTF8_string" - только с дополнительной проверкой на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.


	 Unicode__class::result_flag result_5;

	 std::string stringUTF8_5_1 = u8"WД𠀅东";

	 //------------------------------------------------------
	 const char* pointer_to_Begin_String_UTF8_5 = &stringUTF8_5_1[0];            //Указатель на начало UTF-8 символа, в строке символов, которые нужно проверить на корректность.

	 size_t StringUTF8_Size_5 = stringUTF8_5_1.size();         //Размер в байтах строки в пределах которой нужно проверить UTF-8 символы на корректность.

	 const char* pointer_to_IncorrectByte_5;                                     //В случае если проверка завершилась неудачно и функция наткнулась на некорректный байт, который не соответсвует кодировке UTF-8, то то функция сюда поместить указатель на этот некорректный байт.
	 //------------------------------------------------------



	 //------------------------------------ПРИМЕР_1:-------------------------------------------------
	 result_5 = Unicode__class_.check__UTF8_string_SurrogatePair(pointer_to_Begin_String_UTF8_5, StringUTF8_Size_5);

	 if (result_5 != Unicode__class::result_flag::OK)
	 {
		 if (result_5 == Unicode__class::result_flag::UTF8_incorrect)
		 {
			 std::cout << "result_error_5: UTF8 Incorrect" << std::endl;                 //Значит в строке в пределах указанного размера - есть какой то некорректный UTF-8 символ.
			 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		 }
		 else
		 {
			 if (result_5 == Unicode__class::result_flag::size_not_enough_for_analysis)
			 {
				 std::cout << "result_error_5: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-8 символа, но последующий анализ байт UTF-8 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-8 символ состоящий из 5 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-8 символу, НО так как размер UTF-8 символа занимает 5 байта, то у функции не хватает данных для полного анализа UTF-8 символа.
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
			 else if (result_5 == Unicode__class::result_flag::Greater_than_MaxUnicodeValue)
			 {
				 std::cout << "result_error_5: Greater_than_MaxUnicodeValue" << std::endl;
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
			 else if (result_3 == Unicode__class::result_flag::IncludeSurrogatePairValue)
			 {
				 std::cout << "result_error_5: IncludeSurrogatePairValue" << std::endl;
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
		 }
	 }
	 else
	 {
		 std::cout << "result_5: UTF8 Correct" << std::endl;
	 }
	 //---------------------------------------------------------------------------------------------



	 //------------------------------------ПРИМЕР_2:-------------------------------------------------
	 std::string stringUTF8_5_2 = u8"WД𠀅1"; stringUTF8_5_2[4] = '1';  //Сделаем пример некорректной последовательности UTF-8: В иероглифе "𠀅", который состоит из 5 байт, "испортим" второй байт. Тогда во первых функция вернет результат "UTF8_incorrect", и во воторых поместить указатель на некорректный символ - указываюший на некоректный байт.


	 result_5 = Unicode__class_.check__UTF8_string_SurrogatePair(stringUTF8_5_2.c_str(), stringUTF8_5_2.size(), &pointer_to_IncorrectByte_5);

	 if (result_5 != Unicode__class::result_flag::OK)
	 {
		 if (result_5 == Unicode__class::result_flag::UTF8_incorrect)
		 {
			 std::cout << "result_error_5: UTF8 Incorrect:" << pointer_to_IncorrectByte_5 << std::endl;          //Значит в строке в пределах указанного размера - есть какой то некорректный UTF-8 символ.
			 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		 }
		 else
		 {
			 if (result_5 == Unicode__class::result_flag::size_not_enough_for_analysis)
			 {
				 std::cout << "result_error_5: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-8 символа, но последующий анализ байт UTF-8 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-8 символ состоящий из 5 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-8 символу, НО так как размер UTF-8 символа занимает 5 байта, то у функции не хватает данных для полного анализа UTF-8 символа.
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
			 else if (result_5 == Unicode__class::result_flag::Greater_than_MaxUnicodeValue)
			 {
				 std::cout << "result_error_5: Greater_than_MaxUnicodeValue" << std::endl;
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
			 else if (result_3 == Unicode__class::result_flag::IncludeSurrogatePairValue)
			 {
				 std::cout << "result_error_5: IncludeSurrogatePairValue" << std::endl;
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
		 }
	 }
	 else
	 {
		 std::cout << "result_5: UTF8 Correct" << std::endl;
	 }
	 //--------------------------------------------------------------------------------------------


	 //------------------------------------------------------------------------5-check__UTF8_string_SurrogatePair:Конец----------------------------------------------------------------------------------------





	  //--------------------------------------------------------------------------6-get__UTF8symv_ByteSize:Начало----------------------------------------------------------------------------------------
	  
	  //Функция возврашает размер в байтах UTF-8 символа.
	  
	  //ВНИМАНИЕ!!! Передаваемый символ UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	  //Функция не возвращает ошибок, так как их теоретически не должно быть.


	    std::string stringUTF8_6 = u8"WД𠀅东";

		//-------------------------------------------------------------
		const char* pointer_to_UTF8Symv_6_1 = &stringUTF8_6[0];                   //Указатель на начало UTF-8 символа.
		const char* pointer_to_UTF8Symv_6_2 = &stringUTF8_6[1];
		const char* pointer_to_UTF8Symv_6_3 = &stringUTF8_6[3];
		const char* pointer_to_UTF8Symv_6_4 = &stringUTF8_6[7];
		//-------------------------------------------------------------


		//------------------------------------------------------------------------------------------------------
	    const int UTF8_Symv_ByteSize_6_1 = Unicode__class_.get__UTF8symv_ByteSize(pointer_to_UTF8Symv_6_1);
		const int UTF8_Symv_ByteSize_6_2 = Unicode__class_.get__UTF8symv_ByteSize(pointer_to_UTF8Symv_6_2);
		const int UTF8_Symv_ByteSize_6_3 = Unicode__class_.get__UTF8symv_ByteSize(pointer_to_UTF8Symv_6_3);
		const int UTF8_Symv_ByteSize_6_4 = Unicode__class_.get__UTF8symv_ByteSize(pointer_to_UTF8Symv_6_4);


		std::cout << "UTF8_Symv_ByteSize_6_1:" << UTF8_Symv_ByteSize_6_1 << std::endl;
		std::cout << "UTF8_Symv_ByteSize_6_2:" << UTF8_Symv_ByteSize_6_2 << std::endl;
		std::cout << "UTF8_Symv_ByteSize_6_3:" << UTF8_Symv_ByteSize_6_3 << std::endl;
		std::cout << "UTF8_Symv_ByteSize_6_4:" << UTF8_Symv_ByteSize_6_4 << std::endl;
		//------------------------------------------------------------------------------------------------------
		

	  //--------------------------------------------------------------------------6-get__UTF8symv_ByteSize:Конец----------------------------------------------------------------------------------------





	  //--------------------------------------------------------------------------7-get__UTF8SymvsNumbers:Начало----------------------------------------------------------------------------------------

	   //Функция возврашает кол-во UTF-8 символов в указанной строке с заданным размером.

	   //ВНИМАНИЕ!!! Передаваемый символ UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	   //Функция не возвращает ошибок, так как их теоретически не должно быть.



	  std::string stringUTF8_7 = u8"WД𠀅东1";

	  //-------------------------------------------------------------
	  const char* pointer_to_UTF8Symv_7             = &stringUTF8_7[0];                   //Указатель на начало UTF-8 строки с UTF-8 символами.
	  
	  size_t UTF8_String_Size_7                     = stringUTF8_7.size();                //Размер строки в байтах на который указывает указатель "pointer_to_UTF8Symv_7" в пределах которой нужно посчитать кол-во UTF-8 символов.
	  //-------------------------------------------------------------


	  //------------------------------------------------------------------------------------------------------
	  const size_t UTF8_Symv_Numbers_7 = Unicode__class_.get__UTF8SymvsNumbers(pointer_to_UTF8Symv_7, UTF8_String_Size_7);

	  std::cout << "UTF8_Symv_Numbers_7:" << UTF8_Symv_Numbers_7 << std::endl;
	  //------------------------------------------------------------------------------------------------------


	  //--------------------------------------------------------------------------7-get__UTF8SymvsNumbers:Конец----------------------------------------------------------------------------------------






	 //--------------------------------------------------------------------8-convert__UTF8Symv_to_UnicodePointCode:Начало-----------------------------------------------------------------------------

	 //Фунция конвертирует символ в кодировке UTF-8 в значение Юникода.
	 
	 //ВНИМАНИЕ!!! Передаваемый символ UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	 //Функция не возвращает ошибок, так как их теоретически не должно быть.


	 Unicode__class::result_flag result_8;

	 std::string stringUTF8_8 = u8"WД𠀅东";

	 //-------------------------------------------------------------------
	 const char* pointer_to_beg_UTF8_8_1  = &stringUTF8_8[0];            //Указатель на начало UTF-8 символа, который нужно конвертировать в значение Юникод. В данном случае на "W".
	 const char* pointer_to_beg_UTF8_8_8  = &stringUTF8_8[1];            //Указатель на начало UTF-8 символа, который нужно конвертировать в значение Юникод. В данном случае на "Д".
	 const char* pointer_to_beg_UTF8_8_3  = &stringUTF8_8[3];            //Указатель на начало UTF-8 символа, который нужно конвертировать в значение Юникод. В данном случае на "𠀅".
	 const char* pointer_to_beg_UTF8_8_4  = &stringUTF8_8[7];            //Указатель на начало UTF-8 символа, который нужно конвертировать в значение Юникод. В данном случае на "东".

	 int_least32_t UnicodePointCode_8;                                  //Сюда функция занесет результат в виде значения кодовой точки Юникод.
	 //-------------------------------------------------------------------




	 //-------------------------------------------------------------------
	 UnicodePointCode_8 = Unicode__class_.convert__UTF8Symv_to_UnicodePointCode(pointer_to_beg_UTF8_8_1);   std::cout << "UnicodePointCode_8_1:" << UnicodePointCode_8 << std::endl;    //W  https://symbl.cc/ru/0057/
	 UnicodePointCode_8 = Unicode__class_.convert__UTF8Symv_to_UnicodePointCode(pointer_to_beg_UTF8_8_8);   std::cout << "UnicodePointCode_8_2:" << UnicodePointCode_8 << std::endl;    //Д  https://symbl.cc/ru/0414/
	 UnicodePointCode_8 = Unicode__class_.convert__UTF8Symv_to_UnicodePointCode(pointer_to_beg_UTF8_8_3);   std::cout << "UnicodePointCode_8_3:" << UnicodePointCode_8 << std::endl;    //𠀅  https://symbl.cc/ru/80005/
	 UnicodePointCode_8 = Unicode__class_.convert__UTF8Symv_to_UnicodePointCode(pointer_to_beg_UTF8_8_4);   std::cout << "UnicodePointCode_8_4:" << UnicodePointCode_8 << std::endl;    //东  https://symbl.cc/ru/4E1C/
	 //-------------------------------------------------------------------


	 //--------------------------------------------------------------------8-convert__UTF8Symv_to_UnicodePointCode:Конец-----------------------------------------------------------------------------





	 //------------------------------------------------------------------9-convert__UTF8_String_to_Vec_UnicodePointCode:Начало-----------------------------------------------------------------------------

	  //Фунция конвертирует строку с символами в кодировке UTF-8 заданного размера в вектор значений Юникода.

	  //ВНИМАНИЕ!!! Передаваемый символ UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	  //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	 std::string stringUTF8_9 = u8"WД𠀅东1";

	 //------------------------------------------------------------------	 
	 const char* pointer_to_UTF8Symv_9               = &stringUTF8_9[0];                   //Указатель на начало UTF-8 строки с UTF-8 символами.

	 size_t UTF8_String_Size_9                       = stringUTF8_9.size();                //Размер строки в байтах на который указывает указатель "pointer_to_UTF8Symv_9" в пределах которой нужно работать.

	 std::vector<int_least32_t> vec_UnicodePointCode_9;                                    //Сюда функция ДОБАВИТ результат в КОНЕЦ Вектора в виде значений Юникодных симвлов соовтетвующих символам UTF-8 в указанной строке.
	 //------------------------------------------------------------------


	 //------------------------------------------------------------------
	 //vec_UnicodePointCode_9.resize(0) - так как функция добавляет результат в конец векотора, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.


	 Unicode__class_.convert__UTF8_String_to_Vec_UnicodePointCode(pointer_to_UTF8Symv_9, UTF8_String_Size_9, vec_UnicodePointCode_9);

	 std::cout << "vec_UnicodePointCode_9:";
	 for (size_t i = 0; i < vec_UnicodePointCode_9.size(); i++)
	 {
		 std::cout << vec_UnicodePointCode_9[i] << ",";
	 }
	 std::cout << std::endl;
	 //------------------------------------------------------------------


	 //------------------------------------------------------------------9-convert__UTF8_String_to_Vec_UnicodePointCode:Конец-----------------------------------------------------------------------------






	 //------------------------------------------------------------10-convert__UTF8_String_to_Vec_UnicodePointCode__NotDuplicated:Начало-----------------------------------------------------------------------------

	  //Фунция конвертирует строку с символами в кодировке UTF-8 заданного размера в вектор значений Юникода И ЕСЛИ в строке есть повторяющиеся символы, то не заносит потовряющиеся символы в вектор результата, вообщем без Дубликатов символов.

	  //ВНИМАНИЕ!!! Передаваемый символ UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	  //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	 std::string stringUTF8_10 = u8"WД𠀅ДД东Д1𠀅𠀅东𠀅W111东东";

	 //------------------------------------------------------------------	 
	 const char* pointer_to_UTF8Symv_10 = &stringUTF8_10[0];                         //Указатель на начало UTF-8 строки с UTF-8 символами.

	 size_t UTF8_String_Size_10         = stringUTF8_10.size();                        //Размер строки в байтах на который указывает указатель "pointer_to_UTF8Symv_10" в пределах которой нужно работать.

	 std::vector<int_least32_t> vec_UnicodePointCode_NoDublicate_10;                    //Сюда функция ДОБАВИТ результат в КОНЕЦ Вектора в виде значений Юникодных симвлов соовтетвующих символам UTF-8 в указанной строке. Без потворяющихся символов.
	 //------------------------------------------------------------------


	 //------------------------------------------------------------------
	 //vec_UnicodePointCode_NoDublicate_10.resize(0) - так как функция добавляет результат в конец векотора, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.


	 Unicode__class_.convert__UTF8_String_to_Vec_UnicodePointCode__NotDuplicated(pointer_to_UTF8Symv_10, UTF8_String_Size_10, vec_UnicodePointCode_NoDublicate_10);

	 std::cout << "vec_UnicodePointCode_NoDublicate_10:";
	 for (size_t i = 0; i < vec_UnicodePointCode_NoDublicate_10.size(); i++)
	 {
		 std::cout << vec_UnicodePointCode_NoDublicate_10[i] << ",";
	 }
	 std::cout << std::endl;
	 //------------------------------------------------------------------


	 //-----------------------------------------------------------10-convert__UTF8_String_to_Vec_UnicodePointCode__NotDuplicated:Конец-----------------------------------------------------------------------------







	  //---------------------------------------------------------------11-convert__UTF8_String_to_Vec_UnicodePointCode__Info:Начало-----------------------------------------------------------------------------
	   //Функция собирает "информацию" о UTF8 символах в указанной строке в указанных размерах.

       //ВНИМАНИЕ!!! Передаваемый символ UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	   //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	   std::string stringUTF8_11 = u8"WД𠀅东1";

	   //------------------------------------------------------------------	 
	   const char* pointer_to_UTF8Symv_11    = &stringUTF8_11[0];                            //Указатель на начало UTF-8 строки с UTF-8 символами.

	   size_t UTF8_String_Size_11            = stringUTF8_11.size();                         //Размер строки в байтах на который указывает указатель "pointer_to_UTF8Symv_11" в пределах которой нужно работать.

	   std::vector<Unicode__class::UTF8_SymvInfo_struct> vec_UnicodePointCode_info_11;       //Сюда функция ДОБАВИТЬ результат в КОНЕЦ Вектора в виде значений Юникодных симвлов соовтетвующих символам UTF-8 в указанной строке. 
	   //------------------------------------------------------------------


	   //------------------------------------------------------------------
	    //vec_UnicodePointCode_info_11.resize(0) - так как функция добавляет результат в конец векотора, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.


	   Unicode__class_.convert__UTF8_String_to_Vec_UnicodePointCode__Info(pointer_to_UTF8Symv_11, UTF8_String_Size_11, vec_UnicodePointCode_info_11);

	   std::cout << "----------------vec_UnicodePointCode_info_11:--------------------" << std::endl;
	   for (size_t i = 0; i < vec_UnicodePointCode_info_11.size(); i++)
	   {
		   std::cout << "UnicodePointCode:"     << vec_UnicodePointCode_info_11[i].UnicodePointCode     << std::endl;       //Значение Юникодной точки
		   std::cout << "ByteSize:"             << vec_UnicodePointCode_info_11[i].ByteSize             << std::endl;       //Размер в байтах
		   std::cout << "NumPos:"               << vec_UnicodePointCode_info_11[i].NumPos               << std::endl;       //Номер позиции в указанной строке (нумерация стандартная с нуля)
		   std::cout << "pointer_to_UTF8_Symv:" << vec_UnicodePointCode_info_11[i].pointer_to_UTF8_Symv << std::endl;       //Указатель на первый байт символа в указанной строке.
		   std::cout << std::endl;
	   }
	   std::cout <<"------------------------------------------------------------------" << std::endl;
	   //------------------------------------------------------------------


	  //---------------------------------------------------------------11-convert__UTF8_String_to_Vec_UnicodePointCode__Info:Конец-----------------------------------------------------------------------------





	   //--------------------------------------------------------12-convert__SpecificNumPos_UTF8Symv_in_String_to_UnicodePointCode__Info:Начало-----------------------------------------------------------------------------
	   //Функция собирает "информацию" о UTF8 символах в указанной строке в указанных размерах.

	   //ВНИМАНИЕ!!! Передаваемый символ UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	   //Функция не возвращает ошибок, так как их теоретически не должно быть.

	   Unicode__class::result_flag result_12;

	   std::string stringUTF8_12 = u8"WД𠀅东1";

	   //------------------------------------------------------------------	 
	   const char* pointer_to_UTF8Symv_12 = &stringUTF8_12[0];                            //Указатель на начало UTF-8 строки с UTF-8 символами.

	   size_t UTF8_String_Size_12         = stringUTF8_12.size();                          //Размер строки в байтах на который указывает указатель "pointer_to_UTF8Symv_12" в пределах которой нужно работать.

	   size_t Num_in_String_12            = 4;                                             //Порядковый номер нужного UTF-8 символа в указанной строке. Нумерация стандартная с нуля.

	   Unicode__class::UTF8_SymvInfo_struct UTF8_InfoStruct_12;                           //Сюда функция добавит результат соответствующий символу UTF-8 в указанной строке. 
	   //------------------------------------------------------------------



	   //------------------------------------------------------------------	
	   result_12 = Unicode__class_.convert__SpecificNumPos_UTF8Symv_in_String_to_UnicodePointCode__Info(pointer_to_UTF8Symv_12, UTF8_String_Size_12, Num_in_String_12, UTF8_InfoStruct_12);

	   if (result_12 == Unicode__class::result_flag::OK)
	   {
		   std::cout << "---------------------UTF8_InfoStruct_12:--------------------" << std::endl;
		   std::cout << "UnicodePointCode:" << UTF8_InfoStruct_12.UnicodePointCode << std::endl;          //Значение Юникодной точки
		   std::cout << "ByteSize:" << UTF8_InfoStruct_12.ByteSize << std::endl;                  //Размер в байтах
		   std::cout << "NumPos:" << UTF8_InfoStruct_12.NumPos << std::endl;                    //Номер позиции в указанной строке (нумерация стандартная с нуля)
		   std::cout << "pointer_to_UTF8_Symv:" << UTF8_InfoStruct_12.pointer_to_UTF8_Symv << std::endl;      //Указатель на первый байт символа в указанной строке.
		   std::cout << "------------------------------------------------------------------" << std::endl;
	   }
	   else
	   {
		   if (result_12 == Unicode__class::result_flag::NumPos_NotExist)
		   {
			   std::cout << "ResultError_12:" << Unicode__class_.get__LastResultErrorName();       //Значит символа с таким порядковым номером не в указанной строке в пределах указанного размера.
		   }
	   }
	   //------------------------------------------------------------------


	  //---------------------------------------------------------12-convert__SpecificNumPos_UTF8Symv_in_String_to_UnicodePointCode__Info:Конец-----------------------------------------------------------------------------






	  //-----------------------------------------------------------------------13-convert__UnicodePointCode_to_UTF8Symv:Начало-----------------------------------------------------------------------------

	   //Функция преобразовывает значение Юникодного символа в симмвол в кодировке UTF-8.

	  //ВНИМАНИЕ!!! Передаваемый символ UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	  //Функция не возвращает ошибок, так как их теоретически не должно быть.


	   //------------------------------------------------------------------	 
	   int_least32_t UnicodePointCode_13_1 = 87;                                         //Юникодное значение символа.
	   int_least32_t UnicodePointCode_13_2 = 1044;                                        
	   int_least32_t UnicodePointCode_13_3 = 131077;
	   int_least32_t UnicodePointCode_13_4 = 19996;

	   std::string result_UTF8_13;                                                        //Сюда функция ДОБАВИТ в конец строки символ в кодировке UTF-8 соответствующий значению указанной Юникодной точки. 
	   //------------------------------------------------------------------



	   //------------------------------------------------------------------	
		//result_UTF8_13.resize(0) - так как функция добавляет результат в конец строки, то если резултьтат нужно добавить сначала строки, то заранее его нужно обнулить.
 
	   Unicode__class_.convert__UnicodePointCode_to_UTF8Symv(UnicodePointCode_13_1, result_UTF8_13); std::cout << "UTF8Symv_87:" << result_UTF8_13 << std::endl;
	   
	   result_UTF8_13.resize(0); Unicode__class_.convert__UnicodePointCode_to_UTF8Symv(UnicodePointCode_13_2, result_UTF8_13); std::cout << "UTF8Symv_1044:"   << result_UTF8_13 << std::endl;
	   result_UTF8_13.resize(0); Unicode__class_.convert__UnicodePointCode_to_UTF8Symv(UnicodePointCode_13_3, result_UTF8_13); std::cout << "UTF8Symv_131077:" << result_UTF8_13 << std::endl;
	   result_UTF8_13.resize(0); Unicode__class_.convert__UnicodePointCode_to_UTF8Symv(UnicodePointCode_13_4, result_UTF8_13); std::cout << "UTF8Symv_19996:"  << result_UTF8_13 << std::endl;
	   //------------------------------------------------------------------




	  //-----------------------------------------------------------------------13-convert__UnicodePointCode_to_UTF8Symv:Конец-----------------------------------------------------------------------------





	 //-----------------------------------------------------------------------14-convert__Vec_UnicodePointCode_to_Vec_UTF8:Начало-----------------------------------------------------------------------------

	  //Функция преобразовывает вектор значений Юникодных символов в вектор симмвол в кодировке UTF-8.

	  //ВНИМАНИЕ!!! Передаваемый символ UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	  //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	   //------------------------------------------------------------------	 
	   std::vector<int_least32_t>UnicodePointCode_14 = {87, 1044, 131077, 19996 };      //Вектор Юникодных значений символов.


	   std::vector<std::string>vec_result_UTF8_14;                                      //Сюда функция ДОБАВИТЬ в конец вектора символы в кодировке UTF-8 соответствующие значению указанных Юникодных точек. 
	   //------------------------------------------------------------------



	   //------------------------------------------------------------------	
		//vec_result_UTF8_14.resize(0) - так как функция добавляет результат в конец вектора, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.

	   Unicode__class_.convert__Vec_UnicodePointCode_to_Vec_UTF8(UnicodePointCode_14, vec_result_UTF8_14);

	   std::cout << "vec_result_UTF8_14:";
	   for (size_t i = 0; i < vec_result_UTF8_14.size(); i++)
	   {
		   std::cout << vec_result_UTF8_14[i] << ",";
	   }
	   std::cout << std::endl;
	   //------------------------------------------------------------------


	 //-----------------------------------------------------------------------14-convert__Vec_UnicodePointCode_to_Vec_UTF8:Конец-----------------------------------------------------------------------------






	 //-----------------------------------------------------------------------15-convert__Vec_UnicodePointCode_to_String_UTF8:Начало-----------------------------------------------------------------------------

	  //Функция преобразовывает вектор значений Юникодных символов в Строку симмволов в кодировке UTF-8.

	  //ВНИМАНИЕ!!! Передаваемый символ UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	  //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	   //------------------------------------------------------------------	 
	   std::vector<int_least32_t>UnicodePointCode_15 = { 87, 1044, 131077, 19996 };      //Вектор Юникодных значений символов.


	   std::string string_result_UTF8_15;                                                //Сюда функция ДОБАВИТЬ в конец строки символы в кодировке UTF-8 соответствующие значению указанных Юникодных точек. 
	   //------------------------------------------------------------------



	   //------------------------------------------------------------------	
		//string_result_UTF8_15.resize(0) - так как функция добавляет результат в конец строки, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.

	   Unicode__class_.convert__Vec_UnicodePointCode_to_String_UTF8(UnicodePointCode_15, string_result_UTF8_15);

	   std::cout << "string_result_UTF8_15:" << string_result_UTF8_15 << std::endl;
	   //------------------------------------------------------------------


	 //-----------------------------------------------------------------------15-convert__Vec_UnicodePointCode_to_String_UTF8:Конец-----------------------------------------------------------------------------






	   std::cout << std::endl << std::endl << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl << std::endl;





	 //------------------------------------------------------------------------------16-check_UTF16symvLE:Начало----------------------------------------------------------------------------------------

	 //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "wchar_t" или "char16_t" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
	 //Функция проверяет на корректность один единственный символ UTF-16. Данная функция не проверяет символ UTF-16 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод. Если нужная данная проверка, то использовать функцию "check__UTF16symvLE_SurrogatePair"
	 //Порядок байт для UTF16 little-endian!



	   Unicode__class::result_flag result_16;

	   std::wstring wstringUTF16_16_1     = L"WД𠀅东";

	   //---------------------------------------------------------------------
	   const wchar_t* pointer_to_begin_UTF16_symv_16_1       = &wstringUTF16_16_1[2];                    //Указатель на начало символа в кодировке UTF-8

	   const size_t UTF16_Pair_size                          = 2;                                        //Размер в парах UTF-16 символа на который указывает указатель "pointer_to_begin_UTF16_symv_16_1", размер может быть больше самого размера симмвола, !!НО конечно же НЕ БОЛЬШЕ, чем доступная память по данному указателю!!, НО размер НЕ ДОЛЖЕН быть меньше размера UTF-16 символа, иначе в этом случае будет код возврата "size_not_enough_for_analysis".
	   //const size_t UTF16Symv_size_16                       = &wstringUTF16_16_1[wstringUTF16_16_1.size()-1] - pointer_to_begin_UTF16_symv_16_1 + 1;    //Или так. Указываем оставшиеся пары до конца доступной нам памяти начиная от указателя "pointer_to_begin_UTF16_symv_16_1" котоырй указывает на проверяемый символ.

	   const char16_t* pointer_to_IncorrectPair_16;                                                      //В случае если проверка завершилась неудачно и функция наткнулась на некорректную пару, которая не соответсвует кодировке UTF-16, то то функция сюда поместить указатель на этот некорректную пару.
	   //---------------------------------------------------------------------



	   //--------------------------------Пример_1:---------------------------------
	   result_16 = Unicode__class_.check_UTF16symvLE<wchar_t>(pointer_to_begin_UTF16_symv_16_1, UTF16_Pair_size);


	   if (result_16 != Unicode__class::result_flag::OK)
	   {
		   if (result_16 == Unicode__class::result_flag::UTF16_incorrect)
		   {
			   std::cout << "result_error_16: UTF16 Incorrect" << std::endl;
			   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		   }
		   else
		   {
			   if (result_16 == Unicode__class::result_flag::size_not_enough_for_analysis)
			   {
				   std::cout << "result_error_16: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-8 символа, но последующий анализ байт UTF-8 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-8 символ состоящий из 4 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-8 символу, НО так как размер UTF-8 символа занимает 4 байта, то у функции не хватает данных для полного анализа UTF-8 символа.
				   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			   }
		   }
	   }
	   else
	   {
		   std::cout << "result_16: UTF16 Correct" << std::endl;
	   }
	   //---------------------------------------------------------------------



	   //--------------------------------Пример_2:----------------------------------
	   std::u16string u16stringUTF16_16_2 = u"𠀅";  u16stringUTF16_16_2.resize(1); u16stringUTF16_16_2.append(u"1");  //Сделаем пример некорректной последовательности UTF-16: То есть первая пара будет от корректного UTF-16 символа "𠀅", в котором будет информация о том, что данный символ знаимает 2-е пары, а потом вторую пару "портим" случаным значением. Тогда во первых функция вернет результат "UTF16_incorrect", и во воторых функция поместить указатель на некорректную пару - указываюший на вторую пару.


	   result_16 = Unicode__class_.check_UTF16symvLE<char16_t>(&u16stringUTF16_16_2[0], 4, &pointer_to_IncorrectPair_16);


	   if (result_16 != Unicode__class::result_flag::OK)
	   {
		   if (result_16 == Unicode__class::result_flag::UTF16_incorrect)
		   {
			   std::cout << "result_error_16: UTF16 Incorrect:" << pointer_to_IncorrectPair_16 << std::endl;
			   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		   }
		   else
		   {
			   if (result_16 == Unicode__class::result_flag::size_not_enough_for_analysis)
			   {
				   std::cout << "result_error_16: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-8 символа, но последующий анализ байт UTF-8 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-8 символ состоящий из 4 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-8 символу, НО так как размер UTF-8 символа занимает 4 байта, то у функции не хватает данных для полного анализа UTF-8 символа.
				   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			   }
		   }
	   }
	   else
	   {
		   std::cout << "result_16: UTF16 Correct" << std::endl;
	   }
	   //---------------------------------------------------------------------




	   //------------------------------------------------------------------------------16-check_UTF16symvLE:Конец----------------------------------------------------------------------------------------





	                                                            
	 //-------------------------------------------------------------------------17-check__UTF16symvLE_SurrogatePair:Начало----------------------------------------------------------------------------------------
	 
	 //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "wchar_t" или "char16_t" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
	 //Функция проверяет на корректность один единственный символ UTF-16.Так же дополнительно происходит проверка символа UTF-16 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.
	 //Данная функция делает все тоже самое, что и "check_UTF16symvLE" - только с дополнительной проверкой на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.
	 //Порядок байт для UTF16 little-endian!




	   Unicode__class::result_flag result_17;

	   std::wstring stringUTF16_17_1 = L"WД𠀅东";

	   //---------------------------------------------------------------------
	   const wchar_t* pointer_to_begin_UTF16_symv_17_1      = &stringUTF16_17_1[1];                    //Указатель на начало символа в кодировке UTF-16

	   const size_t UTF16Symv_size_17                       = 2;                                                        //Размер в парах UTF-16 символа на который указывает указатель "pointer_to_begin_UTF16_symv_17_1", размер может быть больше самого размера симмвола, !!НО конечно же НЕ БОЛЬШЕ, чем доступная память по данному указателю!!, НО размер НЕ ДОЛЖЕН быть меньше размера UTF-16 символа, иначе в этом случае будет код возврата "size_not_enough_for_analysis".
	   //const size_t UTF16Symv_size_2                      = &stringUTF16_17_1[stringUTF16_17_1.size()-1] - pointer_to_begin_UTF16_symv_17_1 + 1;    //Или так. Указываем оставшиеся пары до конца доступной нам памяти начиная от указателя "pointer_to_begin_UTF16_symv_17_1" котоырй указывает на проверяемый символ.

	   const wchar_t* pointer_to_IncorrectByte_17;                                                    //В случае если проверка завершилась неудачно и функция наткнулась на некорректный байт, который не соответсвует кодировке UTF-16, то то функция сюда поместить указатель на этот некорректный байт.
	   //---------------------------------------------------------------------



	   //--------------------------------Пример_1:---------------------------------
	   result_17 = Unicode__class_.check_UTF16symvLE__SurrogatePair<wchar_t>(pointer_to_begin_UTF16_symv_17_1, UTF16Symv_size_17);


	   if (result_17 != Unicode__class::result_flag::OK)
	   {
		   if (result_17 == Unicode__class::result_flag::UTF16_incorrect)
		   {
			   std::cout << "result_error_17: UTF16 Incorrect" << std::endl;
			   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		   }
		   else
		   {
			   if (result_17 == Unicode__class::result_flag::size_not_enough_for_analysis)
			   {
				   std::cout << "result_error_17: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-16 символа, но последующий анализ байт UTF-16 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-16 символ состоящий из 4 байта, а размер указан "17" - функция проверила первые три байта и они соовтетввуют корерктному UTF-16 символу, НО так как размер UTF-16 символа занимает 4 байта, то у функции не хватает данных для полного анализа UTF-16 символа.
				   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			   }
			   else if (result_17 == Unicode__class::result_flag::Greater_than_MaxUnicodeValue)
			   {
				   std::cout << "result_error_17: Greater_than_MaxUnicodeValue" << std::endl;
				   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			   }
			   else if (result_17 == Unicode__class::result_flag::IncludeSurrogatePairValue)
			   {
				   std::cout << "result_error_17: IncludeSurrogatePairValue" << std::endl;
				   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			   }
		   }
	   }
	   else
	   {
		   std::cout << "result_17: UTF16 Correct" << std::endl;
	   }
	   //---------------------------------------------------------------------



	   //--------------------------------Пример_2:----------------------------------
	   std::wstring stringUTF16_17_2 = L"𠀅";  stringUTF16_17_2[1] = L'1';  //Сделаем пример некорректной последовательности UTF-16: То первая пара будет от корректного UTF-16 символа "𠀅", в котором будет информация о том, что данный символ знаимает 2 пары, и заменим вторую пару на произвольные значения. Тогда получим во первых функция вернет результат "UTF16_incorrect", и во воторых функция поместит указатель на некорректный символ - указываюший на второй байт.


	   result_17 = Unicode__class_.check_UTF16symvLE__SurrogatePair<wchar_t>(&stringUTF16_17_2[0], stringUTF16_17_2.size(), &pointer_to_IncorrectByte_17);


	   if (result_17 != Unicode__class::result_flag::OK)
	   {
		   if (result_17 == Unicode__class::result_flag::UTF16_incorrect)
		   {
			   std::cout << "result_error_17: UTF16 Incorrect:" << pointer_to_IncorrectByte_17 << std::endl;
			   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		   }
		   else
		   {
			   if (result_17 == Unicode__class::result_flag::size_not_enough_for_analysis)
			   {
				   std::cout << "result_error_17: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-16 символа, но последующий анализ байт UTF-16 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-16 символ состоящий из 4 байта, а размер указан "17" - функция проверила первые три байта и они соовтетввуют корерктному UTF-16 символу, НО так как размер UTF-16 символа занимает 4 байта, то у функции не хватает данных для полного анализа UTF-16 символа.
				   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			   }
			   else if (result_17 == Unicode__class::result_flag::Greater_than_MaxUnicodeValue)
			   {
				   std::cout << "result_error_17: Greater_than_MaxUnicodeValue" << std::endl;
				   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			   }
			   else if (result_17 == Unicode__class::result_flag::IncludeSurrogatePairValue)
			   {
				   std::cout << "result_error_17: IncludeSurrogatePairValue" << std::endl;
				   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			   }
		   }
	   }
	   else
	   {
		   std::cout << "result_17: UTF16 Correct" << std::endl;
	   }
	   //---------------------------------------------------------------------



	   //-------------------------------------------------------------------------17-check__UTF16symvLE_SurrogatePair:Конец----------------------------------------------------------------------------------------





	   
	 //------------------------------------------------------------------------------18-check_UTF16LE_string:Начало----------------------------------------------------------------------------------------

	 //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "wchar_t" или "char16_t" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
	 //Данная функция проверят строку с символами UTF-16 с заданным размером на корректность кодировки UTF-16. Данная функция не проверяет символы UTF-16 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод. Если нужная данная проверка, то использовать функцию "check__UTF16_string_SurrogatePair"
	 //Порядок байт для UTF16 little-endian!



	   Unicode__class::result_flag result_18;

	   std::wstring stringUTF16_18_1 = L"WД𠀅东";

	   //------------------------------------------------------
	   const wchar_t* pointer_to_Begin_String_UTF16_18 = &stringUTF16_18_1[0];            //Указатель на начало UTF-16 символа, в строке символов, которые нужно проверить на корректность.

	   size_t StringUTF16_Size_18                      = stringUTF16_18_1.size();         //Размер в парах строки в пределах которой нужно проверить UTF-16 символы на корректность.

	   const wchar_t* pointer_to_IncorrectByte_18;                                        //В случае если проверка завершилась неудачно и функция наткнулась на некорректную пару, который не соответсвует кодировке UTF-16, то то функция сюда поместить указатель на эту некорректную пару.
	   //------------------------------------------------------



	   //------------------------------------ПРИМЕР_1:-------------------------------------------------
	   result_18 = Unicode__class_.check_UTF16LE_string<wchar_t>(pointer_to_Begin_String_UTF16_18, StringUTF16_Size_18);

	   if (result_18 != Unicode__class::result_flag::OK)
	   {
		   if (result_18 == Unicode__class::result_flag::UTF16_incorrect)
		   {
			   std::cout << "result_error_18: UTF16 Incorrect" << std::endl;                 //Значит в строке в пределах указанного размера - есть какой то некорректный UTF-16 символ.
			   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		   }
		   else
		   {
			   if (result_18 == Unicode__class::result_flag::size_not_enough_for_analysis)
			   {
				   std::cout << "result_error_18: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-16 символа, но последующий анализ байт UTF-16 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-16 символ состоящий из 18 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-16 символу, НО так как размер UTF-16 символа занимает 18 байта, то у функции не хватает данных для полного анализа UTF-16 символа.
				   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			   }
		   }
	   }
	   else
	   {
		   std::cout << "result_18: UTF16 Correct" << std::endl;
	   }
	   //---------------------------------------------------------------------------------------------



	   //------------------------------------ПРИМЕР_2:-------------------------------------------------
	   std::wstring stringUTF16_18_2 = L"WД𠀅1"; stringUTF16_18_2[3] = '1';  //Сделаем пример некорректной последовательности UTF-16: В иероглифе "𠀅", который состоит из 2 пар, "испортим" вторую пару. Тогда во первых функция вернет результат "UTF16_incorrect", и во воторых поместить указатель на некорректную пару - указываюший на некоректную пару.


	   result_18 = Unicode__class_.check_UTF16LE_string<wchar_t>(stringUTF16_18_2.c_str(), stringUTF16_18_2.size(), &pointer_to_IncorrectByte_18);

	   if (result_18 != Unicode__class::result_flag::OK)
	   {
		   if (result_18 == Unicode__class::result_flag::UTF16_incorrect)
		   {
			   std::cout << "result_error_18: UTF16 Incorrect:" << pointer_to_IncorrectByte_18 << std::endl;          //Значит в строке в пределах указанного размера - есть какой то некорректный UTF-16 символ.
			   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		   }
		   else
		   {
			   if (result_18 == Unicode__class::result_flag::size_not_enough_for_analysis)
			   {
				   std::cout << "result_error_18: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-16 символа, но последующий анализ байт UTF-16 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-16 символ состоящий из 18 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-16 символу, НО так как размер UTF-16 символа занимает 18 байта, то у функции не хватает данных для полного анализа UTF-16 символа.
				   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			   }
		   }
	   }
	   else
	   {
		   std::cout << "result_18: UTF16 Correct" << std::endl;
	   }
	   //--------------------------------------------------------------------------------------------


	   //------------------------------------------------------------------------------18-check_UTF16LE_string:Конец----------------------------------------------------------------------------------------

	   




	 //------------------------------------------------------------------------------19-check_UTF16LE_string__SurrogatePair:Начало----------------------------------------------------------------------------------------

	  //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "wchar_t" или "char16_t" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
	  //Данная функция проверят строку с символами UTF-16 с заданным размером на корректность кодировки UTF-16. Так же дополнительно происходит проверка символа UTF-16 на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.
	  //Данная функция делает все тоже самое, что и "check_UTF16LE_string" - только с дополнительной проверкой на принадлежность к диапазону "суррогтаных пар" и выход за пределы максимального значения Юниккод.
	  //Порядок байт для UTF16 little-endian!



	   Unicode__class::result_flag result_19;

	   std::wstring stringUTF16_19_1 = L"WД𠀅东";

	   //------------------------------------------------------
	   const wchar_t* pointer_to_Begin_String_UTF16_19 = &stringUTF16_19_1[0];            //Указатель на начало UTF-16 символа, в строке символов, которые нужно проверить на корректность.

	   size_t StringUTF16_Size_19 = stringUTF16_19_1.size();         //Размер в парах строки в пределах которой нужно проверить UTF-16 символы на корректность.

	   const wchar_t* pointer_to_IncorrectByte_19;                                        //В случае если проверка завершилась неудачно и функция наткнулась на некорректную пару, который не соответсвует кодировке UTF-16, то то функция сюда поместить указатель на эту некорректную пару.
	   //------------------------------------------------------



	   //------------------------------------ПРИМЕР_1:-------------------------------------------------
	   result_19 = Unicode__class_.check_UTF16LE_string__SurrogatePair<wchar_t>(pointer_to_Begin_String_UTF16_19, StringUTF16_Size_19);

	   if (result_19 != Unicode__class::result_flag::OK)
	   {
		 if (result_19 == Unicode__class::result_flag::UTF16_incorrect)
		 {
			 std::cout << "result_error_19: UTF16 Incorrect" << std::endl;                 //Значит в строке в пределах указанного размера - есть какой то некорректный UTF-8 символ.
			 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		 }
		 else
		 {
			 if (result_19 == Unicode__class::result_flag::size_not_enough_for_analysis)
			 {
				 std::cout << "result_error_19: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-8 символа, но последующий анализ байт UTF-8 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-8 символ состоящий из 5 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-8 символу, НО так как размер UTF-8 символа занимает 5 байта, то у функции не хватает данных для полного анализа UTF-8 символа.
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
			 else if (result_19 == Unicode__class::result_flag::Greater_than_MaxUnicodeValue)
			 {
				 std::cout << "result_error_19: Greater_than_MaxUnicodeValue" << std::endl;
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
			 else if (result_3 == Unicode__class::result_flag::IncludeSurrogatePairValue)
			 {
				 std::cout << "result_error_19: IncludeSurrogatePairValue" << std::endl;
				 //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			 }
		 }
	   }
	   else
	   {
		   std::cout << "result_19: UTF16 Correct" << std::endl;
	   }
	   //---------------------------------------------------------------------------------------------



	   //------------------------------------ПРИМЕР_2:-------------------------------------------------
	   std::wstring stringUTF16_19_2 = L"WД𠀅1"; stringUTF16_19_2[3] = '1';  //Сделаем пример некорректной последовательности UTF-16: В иероглифе "𠀅", который состоит из 2 пар, "испортим" вторую пару. Тогда во первых функция вернет результат "UTF16_incorrect", и во воторых поместить указатель на некорректную пару - указываюший на некоректную пару.


	   result_19 = Unicode__class_.check_UTF16LE_string__SurrogatePair<wchar_t>(stringUTF16_19_2.c_str(), stringUTF16_19_2.size(), &pointer_to_IncorrectByte_19);

	   if (result_19 != Unicode__class::result_flag::OK)
	   {
		   if (result_19 == Unicode__class::result_flag::UTF16_incorrect)
		   {
			   std::cout << "result_error_19: UTF16 Incorrect:" << pointer_to_IncorrectByte_19 << std::endl;          //Значит в строке в пределах указанного размера - есть какой то некорректный UTF-8 символ.
			   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
		   }
		   else
		   {
			   if (result_19 == Unicode__class::result_flag::size_not_enough_for_analysis)
			   {
				   std::cout << "result_error_19: size_not_enough_for_analysis" << std::endl;    //Значит, что указатель указывает на начало корректного UTF-8 символа, но последующий анализ байт UTF-8 символа невозможен из за ограничения размера переданного в функцию во втором параметре: то есть предположим, что указатель указывает на UTF-8 символ состоящий из 19 байта, а размер указан "3" - функция проверила первые три байта и они соовтетввуют корерктному UTF-8 символу, НО так как размер UTF-8 символа занимает 19 байта, то у функции не хватает данных для полного анализа UTF-8 символа.
				   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			   }
			   else if (result_19 == Unicode__class::result_flag::Greater_than_MaxUnicodeValue)
			   {
				   std::cout << "result_error_19: Greater_than_MaxUnicodeValue" << std::endl;
				   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			   }
			   else if (result_3 == Unicode__class::result_flag::IncludeSurrogatePairValue)
			   {
				   std::cout << "result_error_19: IncludeSurrogatePairValue" << std::endl;
				   //std::cout << Unicode__class_.get__LastResultErrorName() << std::endl;
			   }
		   }
	   }
	   else
	   {
		   std::cout << "result_19: UTF16 Correct" << std::endl;
	   }
	   //--------------------------------------------------------------------------------------------


	   //------------------------------------------------------------------------------19-check_UTF16LE_string__SurrogatePair:Конец----------------------------------------------------------------------------------------







	  //----------------------------------------------------------------------------------------20-get__UTF16symvLE_PairSize:Начало----------------------------------------------------------------------------------------
	  
	  //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "wchar_t" или "char16_t" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
	  //Порядок байт для UTF16 little-endian!
	  
	  //Функция возврашает размер в парах UTF-16 символа.
	  //ВНИМАНИЕ!!! Передаваемый символ UTF-16 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	  //Функция не возвращает ошибок, так как их теоретически не должно быть.


	   std::u16string stringUTF16_20 = u"WД𠀅东";

	   //-------------------------------------------------------------
	   const char16_t* pointer_to_UTF16Symv_20_1 = &stringUTF16_20[0];                   //Указатель на начало UTF-16 символа.
	   const char16_t* pointer_to_UTF16Symv_20_2 = &stringUTF16_20[1];
	   const char16_t* pointer_to_UTF16Symv_20_3 = &stringUTF16_20[2];
	   const char16_t* pointer_to_UTF16Symv_20_4 = &stringUTF16_20[4];
	   //-------------------------------------------------------------


	   //------------------------------------------------------------------------------------------------------
	   const int UTF16_Symv_ByteSize_20_1 = Unicode__class_.get__UTF16symvLE_PairSize(pointer_to_UTF16Symv_20_1);
	   const int UTF16_Symv_ByteSize_20_2 = Unicode__class_.get__UTF16symvLE_PairSize(pointer_to_UTF16Symv_20_2);
	   const int UTF16_Symv_ByteSize_20_3 = Unicode__class_.get__UTF16symvLE_PairSize(pointer_to_UTF16Symv_20_3);
	   const int UTF16_Symv_ByteSize_20_4 = Unicode__class_.get__UTF16symvLE_PairSize(pointer_to_UTF16Symv_20_4);


	   std::cout << "UTF16_Symv_ByteSize_20_1:" << UTF16_Symv_ByteSize_20_1 << std::endl;
	   std::cout << "UTF16_Symv_ByteSize_20_2:" << UTF16_Symv_ByteSize_20_2 << std::endl;
	   std::cout << "UTF16_Symv_ByteSize_20_3:" << UTF16_Symv_ByteSize_20_3 << std::endl;
	   std::cout << "UTF16_Symv_ByteSize_20_4:" << UTF16_Symv_ByteSize_20_4 << std::endl;
	   //------------------------------------------------------------------------------------------------------


	 //------------------------------------------------------------------------------------------20-get__UTF16symvLE_PairSize:Конец----------------------------------------------------------------------------------------





	 //--------------------------------------------------------------------------------------------21-get__UTF16SymvsLENumbers:Начало----------------------------------------------------------------------------------------

	  //Функция возврашает кол-во UTF-16 символов в указанной строке с заданным размером.

	  //ВНИМАНИЕ!!! Передаваемый символ UTF-16 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	  //Функция не возвращает ошибок, так как их теоретически не должно быть.


	   std::wstring stringUTF8_21 = L"WД𠀅东1";

	   //-------------------------------------------------------------
	   const wchar_t* pointer_to_UTF16Symv_21 = &stringUTF8_21[0];                   //Указатель на начало UTF-16 строки с UTF-16 символами.

	   size_t UTF8_String_Size_21 = stringUTF8_21.size();                           //Размер строки в парах на который указывает указатель "pointer_to_UTF16Symv_21" в пределах которой нужно посчитать кол-во UTF-16 символов.
	   //-------------------------------------------------------------


	   //------------------------------------------------------------------------------------------------------
	   const size_t UTF16_Symv_Numbers_21 = Unicode__class_.get__UTF16SymvsLENumbers<wchar_t>(pointer_to_UTF16Symv_21, UTF8_String_Size_21);

	   std::cout << "UTF16_Symv_Numbers_21:" << UTF16_Symv_Numbers_21 << std::endl;
	   //------------------------------------------------------------------------------------------------------


	   //---------------------------------------------------------------------------------------------21-get__UTF16SymvsLENumbers:Конец----------------------------------------------------------------------------------------








	 //--------------------------------------------------------------------22-convert__UTF16SymvLE_to_UnicodePointCode:Начало-----------------------------------------------------------------------------

	  //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "wchar_t" или "char16_t" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
	  //Порядок байт для UTF16 little-endian!

	 //Фунция конвертирует символ в кодировке UTF-16 в значение Юникода.
	 //ВНИМАНИЕ!!! Передаваемый символ UTF-16 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
     //Функция не возвращает ошибок, так как их теоретически не должно быть.


	   Unicode__class::result_flag result_22;

	   std::wstring stringUTF16_22 = L"WД𠀅东";

	   //-------------------------------------------------------------------
	   const wchar_t* pointer_to_beg_UTF16_22_1  = &stringUTF16_22[0];            //Указатель на начало UTF-16 символа, который нужно конвертировать в значение Юникод. В данном случае на "W".
	   const wchar_t* pointer_to_beg_UTF16_22_22 = &stringUTF16_22[1];            //Указатель на начало UTF-16 символа, который нужно конвертировать в значение Юникод. В данном случае на "Д".
	   const wchar_t* pointer_to_beg_UTF16_22_3  = &stringUTF16_22[2];            //Указатель на начало UTF-16 символа, который нужно конвертировать в значение Юникод. В данном случае на "𠀅".
	   const wchar_t* pointer_to_beg_UTF16_22_4  = &stringUTF16_22[4];            //Указатель на начало UTF-16 символа, который нужно конвертировать в значение Юникод. В данном случае на "东".

	   int_least32_t UnicodePointCode_22;                                   //Сюда функция занесет результат в виде значения кодовой точки Юникод.
	   //-------------------------------------------------------------------




	   //-------------------------------------------------------------------
	   UnicodePointCode_22 = Unicode__class_.convert__UTF16SymvLE_to_UnicodePointCode<wchar_t>(pointer_to_beg_UTF16_22_1);   std::cout << "UnicodePointCode_22_1:" << UnicodePointCode_22 << std::endl;    //W  https://symbl.cc/ru/0057/
	   UnicodePointCode_22 = Unicode__class_.convert__UTF16SymvLE_to_UnicodePointCode<wchar_t>(pointer_to_beg_UTF16_22_22);  std::cout << "UnicodePointCode_22_2:" << UnicodePointCode_22 << std::endl;    //Д  https://symbl.cc/ru/0414/
	   UnicodePointCode_22 = Unicode__class_.convert__UTF16SymvLE_to_UnicodePointCode<wchar_t>(pointer_to_beg_UTF16_22_3);   std::cout << "UnicodePointCode_22_3:" << UnicodePointCode_22 << std::endl;    //𠀅  https://symbl.cc/ru/220005/
	   UnicodePointCode_22 = Unicode__class_.convert__UTF16SymvLE_to_UnicodePointCode<wchar_t>(pointer_to_beg_UTF16_22_4);   std::cout << "UnicodePointCode_22_4:" << UnicodePointCode_22 << std::endl;    //东  https://symbl.cc/ru/4E1C/
	   //-------------------------------------------------------------------


	   //--------------------------------------------------------------------22-convert__UTF16SymvLE_to_UnicodePointCode:Конец-----------------------------------------------------------------------------






	 //------------------------------------------------------------------23-convert__UTF16LE_String_to_Vec_UnicodePointCode:Начало-----------------------------------------------------------------------------

		//Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "wchar_t" или "char16_t" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
	    //Порядок байт для UTF16 little-endian!

	   //Фунция конвертирует строку с символами в кодировке UTF-8 заданного размера в вектор значений Юникода.
	   //ВНИМАНИЕ!!! Передаваемый символ UTF-16 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	   //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	   std::wstring stringUTF8_23 = L"WД𠀅东1";

	   //------------------------------------------------------------------	 
	   const wchar_t* pointer_to_UTF16Symv_23 = &stringUTF8_23[0];                           //Указатель на начало UTF-8 строки с UTF-8 символами.

	   size_t UTF8_String_Size_23 = stringUTF8_23.size();                                  //Размер строки в парах на который указывает указатель "pointer_to_UTF16Symv_23" в пределах которой нужно работать.

	   std::vector<int_least32_t> vec_UnicodePointCode_23;                                 //Сюда функция ДОБАВИТ результат в КОНЕЦ Вектора в виде значений Юникодных симвлов соовтетвующих символам UTF-16 в указанной строке.
	   //------------------------------------------------------------------


	   //------------------------------------------------------------------
	   //vec_UnicodePointCode_23.resize(0) - так как функция добавляет результат в конец векотора, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.


	   Unicode__class_.convert__UTF16LE_String_to_Vec_UnicodePointCode<wchar_t>(pointer_to_UTF16Symv_23, UTF8_String_Size_23, vec_UnicodePointCode_23);

	   std::cout << "vec_UnicodePointCode_23:";
	   for (size_t i = 0; i < vec_UnicodePointCode_23.size(); i++)
	   {
		   std::cout << vec_UnicodePointCode_23[i] << ",";
	   }
	   std::cout << std::endl;
	   //------------------------------------------------------------------


	   //------------------------------------------------------------------23-convert__UTF16LE_String_to_Vec_UnicodePointCode:Конец-----------------------------------------------------------------------------










	 //------------------------------------------------------------24-convert__UTF16LE_String_to_Vec_UnicodePointCode__NotDuplicated:Начало-----------------------------------------------------------------------------

		//Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "wchar_t" или "char16_t" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
		//Порядок байт для UTF16 little-endian!

	   //Фунция конвертирует строку с символами в кодировке UTF-16 заданного размера в вектор значений Юникода И ЕСЛИ в строке есть повторяющиеся символы, то не заносит потовряющиеся символы в вектор результата, вообщем без Дубликатов символов.
	   //ВНИМАНИЕ!!! Передаваемый символ UTF-16 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	   //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	   std::wstring stringUTF16_24 = L"WД𠀅ДД东Д1𠀅𠀅东𠀅W111东东";


	   //------------------------------------------------------------------	 
	   const wchar_t* pointer_to_UTF16Symv_24 = &stringUTF16_24[0];                   //Указатель на начало UTF-16 строки с UTF-16 символами.

	   size_t UTF16_String_Size_24 = stringUTF16_24.size();                          //Размер строки в парах на который указывает указатель "pointer_to_UTF16Symv_24" в пределах которой нужно работать.

	   std::vector<int_least32_t> vec_UnicodePointCode_NoDublicate_24;               //Сюда функция ДОБАВИТ результат в КОНЕЦ Вектора в виде значений Юникодных симвлов соовтетвующих символам UTF-16 в указанной строке. Без потворяющихся символов.
	   //------------------------------------------------------------------


	   //------------------------------------------------------------------
	   //vec_UnicodePointCode_NoDublicate_24.resize(0) - так как функция добавляет результат в конец векотора, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.


	   Unicode__class_.convert__UTF16LE_String_to_Vec_UnicodePointCode__NotDuplicated<wchar_t>(pointer_to_UTF16Symv_24, UTF16_String_Size_24, vec_UnicodePointCode_NoDublicate_24);

	   std::cout << "vec_UnicodePointCode_NoDublicate_24:";
	   for (size_t i = 0; i < vec_UnicodePointCode_NoDublicate_24.size(); i++)
	   {
		   std::cout << vec_UnicodePointCode_NoDublicate_24[i] << ",";
	   }
	   std::cout << std::endl;
	   //------------------------------------------------------------------


	   //-----------------------------------------------------------24-convert__UTF16LE_String_to_Vec_UnicodePointCode__NotDuplicated:Конец-----------------------------------------------------------------------------







		//---------------------------------------------------------------25-convert__UTF16LE_String_to_Vec_UnicodePointCode__Info:Начало-----------------------------------------------------------------------------
		 
	    //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "wchar_t" или "char16_t" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
		//Порядок байт для UTF16 little-endian!

		//Функция собирает "информацию" о UTF16 символах в указанной строке в указанных размерах.
		//ВНИМАНИЕ!!! Передаваемый символ UTF-16 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
		//Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	   std::wstring stringUTF16_25 = L"WД𠀅东1";

	   //------------------------------------------------------------------	 
	   const wchar_t* pointer_to_UTF16Symv_25 = &stringUTF16_25[0];                            //Указатель на начало UTF-16 строки с UTF-16 символами.

	   size_t UTF16_String_Size_25 = stringUTF16_25.size();                         //Размер строки в байтах на который указывает указатель "pointer_to_UTF16Symv_25" в пределах которой нужно работать.

	   std::vector<Unicode__class::UTF16_SymvInfo_struct> vec_UnicodePointCode_info_25;       //Сюда функция ДОБАВИТЬ результат в КОНЕЦ Вектора в виде значений Юникодных симвлов соовтетвующих символам UTF-16 в указанной строке. 
	   //------------------------------------------------------------------


	   //------------------------------------------------------------------
		//vec_UnicodePointCode_info_25.resize(0) - так как функция добавляет результат в конец векотора, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.


	   Unicode__class_.convert__UTF16LE_String_to_Vec_UnicodePointCode__Info<wchar_t>(pointer_to_UTF16Symv_25, UTF16_String_Size_25, vec_UnicodePointCode_info_25);

	   std::cout << "----------------vec_UnicodePointCode_info_25:--------------------" << std::endl;
	   for (size_t i = 0; i < vec_UnicodePointCode_info_25.size(); i++)
	   {
		   std::cout << "UnicodePointCode:"      << vec_UnicodePointCode_info_25[i].UnicodePointCode      << std::endl;       //Значение Юникодной точки
		   std::cout << "PairSize:"              << vec_UnicodePointCode_info_25[i].PairSize              << std::endl;       //Размер в парах
		   std::cout << "NumPos:"                << vec_UnicodePointCode_info_25[i].NumPos                << std::endl;       //Номер позиции в указанной строке (нумерация стандартная с нуля)
		   std::cout << "pointer_to_UTF16_Symv:" << vec_UnicodePointCode_info_25[i].pointer_to_UTF16_Symv << std::endl;       //Указатель на первый байт символа в указанной строке.
		   std::cout << std::endl;
	   }
	   std::cout << "------------------------------------------------------------------" << std::endl;
	   //------------------------------------------------------------------


	  //---------------------------------------------------------------25-convert__UTF16LE_String_to_Vec_UnicodePointCode__Info:Конец-----------------------------------------------------------------------------





	   //--------------------------------------------------------26-convert__SpecificNumPos_UTF16SymvLE_in_String_to_UnicodePointCode__Info:Начало-----------------------------------------------------------------------------
	  
		//Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "wchar_t" или "char16_t" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
		//Порядок байт для UTF16 little-endian!

	   //Функция собирает "информацию" о UTF16 символах в указанной строке в указанных размерах.
	   //ВНИМАНИЕ!!! Передаваемый символ UTF-16 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	   //Функция не возвращает ошибок, так как их теоретически не должно быть.


	   Unicode__class::result_flag result_26;

	   std::wstring stringUTF16_26 = L"WД𠀅东1";

	   //------------------------------------------------------------------	 
	   const wchar_t* pointer_to_UTF16Symv_26 = &stringUTF16_26[0];                            //Указатель на начало UTF-16 строки с UTF-16 символами.

	   size_t UTF16_String_Size_26 = stringUTF16_26.size();                                    //Размер строки в байтах на который указывает указатель "pointer_to_UTF16Symv_26" в пределах которой нужно работать.

	   size_t Num_in_String_26 = 4;                                                           //Порядковый номер нужного UTF-16 символа в указанной строке. Нумерация стандартная с нуля.

	   Unicode__class::UTF16_SymvInfo_struct UTF16_InfoStruct_26;                             //Сюда функция добавит результат соответствующий символу UTF-16 в указанной строке. 
	   //------------------------------------------------------------------



	   //------------------------------------------------------------------	
	   result_26 = Unicode__class_.convert__SpecificNumPos_UTF16SymvLE_in_String_to_UnicodePointCode__Info<wchar_t>(pointer_to_UTF16Symv_26, UTF16_String_Size_26, Num_in_String_26, UTF16_InfoStruct_26);

	   if (result_26 == Unicode__class::result_flag::OK)
	   {
		   std::cout << "---------------------UTF16_InfoStruct_26:--------------------"       << std::endl;
		   std::cout << "UnicodePointCode:"      << UTF16_InfoStruct_26.UnicodePointCode      << std::endl;           //Значение Юникодной точки
		   std::cout << "PairSize:"              << UTF16_InfoStruct_26.PairSize              << std::endl;           //Размер в байтах
		   std::cout << "NumPos:"                << UTF16_InfoStruct_26.NumPos                << std::endl;           //Номер позиции в указанной строке (нумерация стандартная с нуля)
		   std::cout << "pointer_to_UTF16_Symv:" << UTF16_InfoStruct_26.pointer_to_UTF16_Symv << std::endl;           //Указатель на первый байт символа в указанной строке.
		   std::cout << "------------------------------------------------------------------"  << std::endl;
	   }
	   else
	   {
		   if (result_26 == Unicode__class::result_flag::NumPos_NotExist)
		   {
			   std::cout << "ResultError_26:" << Unicode__class_.get__LastResultErrorName();       //Значит символа с таким порядковым номером не в указанной строке в пределах указанного размера.
		   }
	   }
	   //------------------------------------------------------------------


	  //---------------------------------------------------------26-convert__SpecificNumPos_UTF16SymvLE_in_String_to_UnicodePointCode__Info:Конец-----------------------------------------------------------------------------








	  //-----------------------------------------------------------------------27-convert__UnicodePointCode_to_UTF16SymvLE:Начало-----------------------------------------------------------------------------

	   //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "std::wstring" или "std::u16string" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
	   //Порядок байт для UTF16 little-endian!

	  //Функция преобразовывает значение Юникодного символа в симмвол в кодировке UTF-16.
	  //ВНИМАНИЕ!!! Передаваемый символ UTF-16 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	  //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	   //------------------------------------------------------------------	 
	   int_least32_t UnicodePointCode_27_1 = 87;                                         //Юникодное значение символа.
	   int_least32_t UnicodePointCode_27_2 = 1044;
	   int_least32_t UnicodePointCode_27_3 = 131077;
	   int_least32_t UnicodePointCode_27_4 = 19996;

	   std::wstring result_UTF16_27;                                                        //Сюда функция ДОБАВИТ в конец строки символ в кодировке UTF-16 соответствующий значению указанной Юникодной точки. 
	   //------------------------------------------------------------------



	   //------------------------------------------------------------------	
		//result_UTF16_27.resize(0) - так как функция добавляет результат в конец строки, то если резултьтат нужно добавить сначала строки, то заранее его нужно обнулить.

	   result_UTF16_27.resize(0); Unicode__class_.convert__UnicodePointCode_to_UTF16SymvLE<std::wstring>(UnicodePointCode_27_1, result_UTF16_27); std::cout << "UTF16Symv_87:";      if (result_UTF16_27 == L"W")  { std::cout << "Equal" << std::endl; } else { std::cout << "Not Equal" << std::endl; }
	   result_UTF16_27.resize(0); Unicode__class_.convert__UnicodePointCode_to_UTF16SymvLE<std::wstring>(UnicodePointCode_27_2, result_UTF16_27); std::cout << "UTF16Symv_1044:";    if (result_UTF16_27 == L"Д")  { std::cout << "Equal" << std::endl; } else { std::cout << "Not Equal" << std::endl; }
	   result_UTF16_27.resize(0); Unicode__class_.convert__UnicodePointCode_to_UTF16SymvLE<std::wstring>(UnicodePointCode_27_3, result_UTF16_27); std::cout << "UTF16Symv_131077:";  if (result_UTF16_27 == L"𠀅") { std::cout << "Equal" << std::endl; } else { std::cout << "Not Equal" << std::endl; }
	   result_UTF16_27.resize(0); Unicode__class_.convert__UnicodePointCode_to_UTF16SymvLE<std::wstring>(UnicodePointCode_27_4, result_UTF16_27); std::cout << "UTF16Symv_19996:";   if (result_UTF16_27 == L"东") { std::cout << "Equal" << std::endl; } else { std::cout << "Not Equal" << std::endl; }
	   //------------------------------------------------------------------

	  //-----------------------------------------------------------------------27-convert__UnicodePointCode_to_UTF16SymvLE:Конец-----------------------------------------------------------------------------





	 //-----------------------------------------------------------------------28-convert__Vec_UnicodePointCode_to_Vec_UTF16LE:Начало-----------------------------------------------------------------------------

	   //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "std::wstring" или "std::u16string"" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
	   //Порядок байт для UTF16 little-endian!

	  //Функция преобразовывает вектор значений Юникодных символов в вектор симмвол в кодировке UTF-16.
	  //ВНИМАНИЕ!!! Передаваемый символ UTF-16 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
      //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	   std::vector<std::wstring>vec_for_verification_28 = { L"W",L"Д",L"𠀅",L"东" };  //Для проверки

	   //------------------------------------------------------------------	 
	   std::vector<int_least32_t>UnicodePointCode_28 = { 87, 1044, 131077, 19996 };      //Вектор Юникодных значений символов.


	   std::vector<std::wstring>vec_result_UTF16_28;                                      //Сюда функция ДОБАВИТЬ в конец вектора символы в кодировке UTF-16 соответствующие значению указанных Юникодных точек. 
	   //------------------------------------------------------------------



	   //------------------------------------------------------------------	
		//vec_result_UTF16_28.resize(0) - так как функция добавляет результат в конец вектора, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.

	   Unicode__class_.convert__Vec_UnicodePointCode_to_Vec_UTF16LE<std::wstring>(UnicodePointCode_28, vec_result_UTF16_28);

	   std::cout << "vec_result_UTF16_28:";
	   for (size_t i = 0; i < vec_result_UTF16_28.size(); i++)
	   {
		   if (vec_result_UTF16_28[i] == vec_for_verification_28[i])
		   {
			   std::cout << "Equal" << ",";
		   }
		   else
		   {
			   std::cout << "Not Equal" << ",";
		   }
	   }
	   std::cout << std::endl;
	   //------------------------------------------------------------------


	 //-----------------------------------------------------------------------28-convert__Vec_UnicodePointCode_to_Vec_UTF16LE:Конец-----------------------------------------------------------------------------






	 //-----------------------------------------------------------------------29-convert__Vec_UnicodePointCode_to_String_UTF16LE:Начало-----------------------------------------------------------------------------

	   //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "std::wstring" или "std::u16string" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
	   //Порядок байт для UTF16 little-endian!

	  //Функция преобразовывает вектор значений Юникодных символов в Строку симмволов в кодировке UTF-16.
	  //ВНИМАНИЕ!!! Передаваемый символ UTF-16 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	  //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".



	   std::u16string for_verification_29 = u"WД𠀅东";                                  //Для проверки


	   //------------------------------------------------------------------	 
	   std::vector<int_least32_t>UnicodePointCode_29 = { 87, 1044, 131077, 19996 };      //Вектор Юникодных значений символов.


	   std::u16string string_result_UTF16_29;                                                //Сюда функция ДОБАВИТЬ в конец строки символы в кодировке UTF-16 соответствующие значению указанных Юникодных точек. 
	   //------------------------------------------------------------------



	   //------------------------------------------------------------------	
		//string_result_UTF16_29.resize(0) - так как функция добавляет результат в конец строки, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.

	   Unicode__class_.convert__Vec_UnicodePointCode_to_String_UTF16LE<std::u16string>(UnicodePointCode_29, string_result_UTF16_29);

	   if (string_result_UTF16_29 == for_verification_29)
	   {
		   std::cout << "string_result_UTF16_29: Equal" << std::endl;
	   }
	   else
	   {
		   std::cout << "string_result_UTF16_29: Not Equal" << std::endl;
	   }
	   //------------------------------------------------------------------


	 //-----------------------------------------------------------------------29-convert__Vec_UnicodePointCode_to_String_UTF16LE:Конец-----------------------------------------------------------------------------




	  //---------------------------------------------------------------------------30-Convert_from_UTF8_to_UTF16LE_OneSymv:Начало-----------------------------------------------------------------------------

	   //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "std::wstring" или "std::u16string" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "std::wstring".
	   //Порядок байт для UTF16 little-endian!

	  //Функция преобразовывает Один символ в кодировке UTF8 в символ в кодировке UTF16(little-endian).
	  //ВНИМАНИЕ!!! Передаваемый символ UTF-16 и UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	  //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	   std::vector<std::string>vec_for_verificationUTF8_30   = { u8"W", u8"Д", u8"𠀅", u8"东" };  //Для проверки

	   std::vector<std::wstring>vec_for_verificationUTF16_30 = { L"W", L"Д", L"𠀅", L"东" };     //Для проверки


	   //---------------------------------------------------------------------
	   const char* pointer_to_UTF8Symv_30 = vec_for_verificationUTF8_30[0].c_str();             //Указатель на символ UTF-8.

	   std::wstring result_UTF16_30;                                                            //Сюда функция Добавит в Конец строки результат в виде UTF-16 символа сооветтвующего UTF-8 символу.
	   //---------------------------------------------------------------------
	

	   //---------------------------------------------------------------------
	   //result_UTF16_30.resize(0) - так как функция добавляет результат в конец строки, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.
	   
	   result_UTF16_30.resize(0);  Unicode__class_.Convert_from_UTF8_to_UTF16LE_OneSymv<std::wstring>(pointer_to_UTF8Symv_30, result_UTF16_30);                 if (result_UTF16_30 == vec_for_verificationUTF16_30[0]) { std::cout << "Equal" << std::endl; } else { std::cout << "Not Equal" << std::endl; }

	   result_UTF16_30.resize(0);  Unicode__class_.Convert_from_UTF8_to_UTF16LE_OneSymv<std::wstring>(vec_for_verificationUTF8_30[1].c_str(), result_UTF16_30); if (result_UTF16_30 == vec_for_verificationUTF16_30[1]) { std::cout << "Equal" << std::endl; } else { std::cout << "Not Equal" << std::endl; }

	   result_UTF16_30.resize(0);  Unicode__class_.Convert_from_UTF8_to_UTF16LE_OneSymv<std::wstring>(vec_for_verificationUTF8_30[2].c_str(), result_UTF16_30); if (result_UTF16_30 == vec_for_verificationUTF16_30[2]) { std::cout << "Equal" << std::endl; }else { std::cout << "Not Equal" << std::endl; }

	   result_UTF16_30.resize(0);  Unicode__class_.Convert_from_UTF8_to_UTF16LE_OneSymv<std::wstring>(vec_for_verificationUTF8_30[3].c_str(), result_UTF16_30); if (result_UTF16_30 == vec_for_verificationUTF16_30[3]) { std::cout << "Equal" << std::endl; }else { std::cout << "Not Equal" << std::endl; }
	   //---------------------------------------------------------------------


	  //---------------------------------------------------------------------------30-Convert_from_UTF8_to_UTF16LE_OneSymv:Конец-----------------------------------------------------------------------------




	  //---------------------------------------------------------------------------31-Convert_from_UTF16LE_to_UTF8_OneSymv:Начало-----------------------------------------------------------------------------

	   //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "wchar_t" или "char16_t" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
	   //Порядок байт для UTF16 little-endian!

	  //Функция преобразовывает Один символ в кодировке UTF16(little-endian) в символ в кодировке UTF-8.
	  //ВНИМАНИЕ!!! Передаваемый символ UTF-16 и UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	  //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	   std::vector<std::string>vec_for_verificationUTF8_31 = { u8"W", u8"Д", u8"𠀅", u8"东" };     //Для проверки

	   std::vector<std::u16string>vec_for_verificationUTF16_31 = { u"W", u"Д", u"𠀅", u"东" };     //Для проверки


	   //---------------------------------------------------------------------
	   const char16_t* pointer_to_UTF16Symv_31 = vec_for_verificationUTF16_31[0].c_str();         //Указатель на символ UTF-16.

	   std::string result_UTF8_31;                                                            //Сюда функция Добавит в Конец строки результат в виде UTF-16 символа сооветтвующего UTF-8 символу.
	   //---------------------------------------------------------------------


	   //---------------------------------------------------------------------
	   //result_UTF8_31.resize(0) - так как функция добавляет результат в конец строки, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.

	   result_UTF8_31.resize(0);  Unicode__class_.Convert_from_UTF16LE_to_UTF8_OneSymv<char16_t>(pointer_to_UTF16Symv_31, result_UTF8_31);                 if (result_UTF8_31 == vec_for_verificationUTF8_31[0]) { std::cout << "Equal" << std::endl; }else { std::cout << "Not Equal" << std::endl; }

	   result_UTF8_31.resize(0);  Unicode__class_.Convert_from_UTF16LE_to_UTF8_OneSymv<char16_t>(vec_for_verificationUTF16_31[1].c_str(), result_UTF8_31); if (result_UTF8_31 == vec_for_verificationUTF8_31[1]) { std::cout << "Equal" << std::endl; }else { std::cout << "Not Equal" << std::endl; }

	   result_UTF8_31.resize(0);  Unicode__class_.Convert_from_UTF16LE_to_UTF8_OneSymv<char16_t>(vec_for_verificationUTF16_31[2].c_str(), result_UTF8_31); if (result_UTF8_31 == vec_for_verificationUTF8_31[2]) { std::cout << "Equal" << std::endl; }else { std::cout << "Not Equal" << std::endl; }

	   result_UTF8_31.resize(0);  Unicode__class_.Convert_from_UTF16LE_to_UTF8_OneSymv<char16_t>(vec_for_verificationUTF16_31[3].c_str(), result_UTF8_31); if (result_UTF8_31 == vec_for_verificationUTF8_31[3]) { std::cout << "Equal" << std::endl; }else { std::cout << "Not Equal" << std::endl; }
	   //---------------------------------------------------------------------


	  //---------------------------------------------------------------------------31-Convert_from_UTF16LE_to_UTF8_OneSymv:Конец-----------------------------------------------------------------------------





	  //-------------------------------------------------------------------------------32-Convert_from_UTF8_to_UTF16LE:Начало-----------------------------------------------------------------------------

	   //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "std::wstring" или "std::u16string" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "std::wstring".
	   //Порядок байт для UTF16 little-endian!

	  //Функция преобразовывает строку символов в кодировке UTF-8 в сроку символ в кодировке UTF16(little-endian).
	  //ВНИМАНИЕ!!! Передаваемый символ UTF-16 и UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
	  //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	   std::string string_UTF8_32 = u8"WД𠀅东1";                        

	   std::u16string for_verificationUTF16_32 = u"WД𠀅东1";                 //Для проверки


	   //---------------------------------------------------------------------
	   const char* pointer_to_UTF8Symv_32    = string_UTF8_32.c_str();                            //Указатель на символ UTF-8 и начало строки.

	   size_t UTF8_String_size_32            = string_UTF8_32.size();                              //Размер строки  байтах по указателю "pointer_to_UTF8Symv_32" в пределах которой нужно работать.

	   std::u16string result_UTF16_32;                                                            //Сюда функция Добавит в Конец строки результат в виде UTF-16 символов соответсвующих UTF-8 символам.
	   //---------------------------------------------------------------------


	   //---------------------------------------------------------------------
	   //result_UTF16_32.resize(0) - так как функция добавляет результат в конец строки, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.

	   Unicode__class_.Convert_from_UTF8_to_UTF16LE<std::u16string>(pointer_to_UTF8Symv_32, UTF8_String_size_32, result_UTF16_32);
	   
	   if (result_UTF16_32 == for_verificationUTF16_32)
	   { 
		   std::cout << "Equal_" << std::endl; 
	   }
	   else 
	   { 
		   std::cout << "Not Equal_" << std::endl; 
	   }
	   //---------------------------------------------------------------------


	  //-------------------------------------------------------------------------------32-Convert_from_UTF8_to_UTF16LE:Конец-----------------------------------------------------------------------------




	  //-------------------------------------------------------------------------------33-Convert_from_UTF16LE_to_UTF8:Начало-----------------------------------------------------------------------------

	   //Эта ШАБЛОННАЯ ФУНКЦИЯ, которая принимает один из двух типов: "wchar_t" или "char16_t" - в хависимости от необходимости. Для Винды - в большинстве случае вероятно нужно "wchar_t".
	   //Порядок байт для UTF16 little-endian!

	  //Функция преобразовывает строку символов в кодировке UTF16 в сроку символ в кодировке UTF8.
	  //ВНИМАНИЕ!!! Передаваемый символ UTF-16 и UTF-8 ГАРАНТИРОВАНО ДОЛЖЕН БЫТЬ КОРРЕКТНЫМ - ИНАЧЕ ПОВЕДЕНИЕ ФУНКЦИИ НЕ ОПРЕДЕЛЕНО. ЕСЛИ ЕСТЬ СОМНЕНИЯ в КОРРЕКТНОСТИ ПЕРЕДАВАЕМОГО СИМВОЛА - ЗАРАНЕЕ ПРОВЕРИТЬ С ПОПОМЩОЬБ СООВОТЕТВУЮЩЕЙ ФУНКЦИИ "check_xxxx"
      //Функция не возвращает ошибок, так как их теоретически не должно быть. В худшем случае, функция может выкинуть исключение "bad_alloc".


	   std::wstring string_UTF16_33        = L"WД𠀅东1";

	   std::string for_verificationUTF8_33 = u8"WД𠀅东1";                 //Для проверки


	   //---------------------------------------------------------------------
	   const wchar_t* pointer_to_UTF16Symv_33   = string_UTF16_33.c_str();                             //Указатель на символ UTF-16 и начало строки.

	   size_t UTF8_String_size_33               = string_UTF16_33.size();                              //Размер строки  в парах по указателю "pointer_to_UTF16Symv_33" в пределах которой нужно работать.

	   std::string result_UTF16_33;                                                                   //Сюда функция Добавит в Конец строки результат в виде UTF-8 символов соответсвующих UTF-16 символам.
	   //---------------------------------------------------------------------


	   //---------------------------------------------------------------------
	   //result_UTF16_33.resize(0) - так как функция добавляет результат в конец строки, то если резултьтат нужно добавить сначала вектора, то заранее его нужно обнулить.

	   Unicode__class_.Convert_from_UTF16LE_to_UTF8<wchar_t>(pointer_to_UTF16Symv_33, UTF8_String_size_33, result_UTF16_33);

	   if (result_UTF16_33 == for_verificationUTF8_33)
	   {
		   std::cout << "Equal__" << std::endl;
	   }
	   else
	   {
		   std::cout << "Not Equal__" << std::endl;
	   }
	   //---------------------------------------------------------------------


	  //-------------------------------------------------------------------------------33-Convert_from_UTF16LE_to_UTF8:Конец-----------------------------------------------------------------------------



	//*********************************************************************************Unicode__class:Конец***************************************************************************************************



}


