#pragma once
#include "Item.h"
#include <vector>

class ItemHelper
{
public:
	ItemHelper();
	~ItemHelper();

public:
	static int get_last_id(std::vector<Item> items)
	{
		int last = 0;
		for (int i = 0; i < (int)items.size(); i++)
		{
			Item item = items[i];
			if (item.id > last)
			{
				last = item.id;
			}
		}
		return last;
	}

public:
	static Item get_item_from_book(int book_id, std::vector<Item> items)
	{
		if (items.size() > 0)
		{
			for (int i = (int)items.size() - 1; i >= 0; i--)
			{
				Item item = items[i];
				if (item.id_book == book_id)
				{
					return item;
				}
			}
		}
		return Item();
	}

};

