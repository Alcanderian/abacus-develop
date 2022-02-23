//=======================
// AUTHOR : Peize Lin
// DATE :   2021-12-13
//=======================

#include "read_txt_input_list.h"
#include "module_base/tool_title.h"

namespace Read_Txt_Input
{
	void Input_List::add_item(const Input_Item &input_item)
	{
		this->list.insert(make_pair(input_item.label, input_item));
		this->output_labels.push_back(input_item.label);
	}

	/*
	void Input_List::check_value_size(const Input_Item& input_item, const int size)
	{
		if(input_item.value_read_size==-1)
			return;
		if(input_item.value_read_size!=size)
			throw std::out_of_range(std::to_string(input_item.value_read_size)+std::to_string(size));
	}	

	void Input_List::check_value_size(const Input_Item& input_item, const int size_low, const int size_up)
	{
		if(input_item.value_read_size==-1)
			return;
		if(input_item.value_read_size<size_low || input_item.value_read_size>size_up)
			throw std::out_of_range(std::to_string(input_item.value_read_size)+std::to_string(size_low)+std::to_string(size_up));
	}
	*/

	void Input_List::set_items()
	{
		ModuleBase::TITLE("Input_List","set_items");
		this->set_items_general();
		this->set_items_pw();
		this->set_items_spectrum();
	}

}