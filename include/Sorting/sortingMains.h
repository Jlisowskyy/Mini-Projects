//
// Created by Jlisowskyy on 1/13/24.
//

#ifndef SORTINGMAINS_H
#define SORTINGMAINS_H

#include "listSorting.h"
#include "indexedSorting.h"

static constexpr bool displayListHeapSort = true;
static constexpr bool displayListMergeSort = false;
static constexpr bool displayListInsertionSort = false;
static constexpr bool displayListQuickSort = false;

int sortMain() {
    using lNode = ListSortingAlgorithms::listNode<int>;

    if constexpr (displayListHeapSort) {
        static constexpr int items1[] { 14 , 5256, 45, 6343 , 626 , 634 ,614, 6346 ,346 ,209235 , 0 , -3 ,12, -1};
        static constexpr int items2[] { 14, 14 ,14 ,14 ,14 ,14, 2235, 2510 ,- 2142 ,412, 41, -24};

        lNode *list1{}, *list2{};

        for (auto item: items1) {
            lNode::pushFront(list1, item);
        }

        for (auto item: items2) {
            lNode::pushFront(list2, item);
        }


        std::cout << "List1 before sorting:\n";
        lNode::printList(list1);

        ListSortingAlgorithms::HeapSort(list1);

        std::cout << "List1 after sorting:\n";
        lNode::printList(list1);


        std::cout << "List2 before sorting:\n";
        lNode::printList(list2);

        ListSortingAlgorithms::HeapSort(list2);

        std::cout << "List2 after sorting:\n";
        lNode::printList(list2);

        lNode::cleanList(list1);
        lNode::cleanList(list2);
    }

    if constexpr (displayListInsertionSort) {

    }

    if constexpr (displayListMergeSort) {

    }

    if constexpr (displayListQuickSort) {

    }
}

#endif //SORTINGMAINS_H
