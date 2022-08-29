# LeetCode by C++
[LeetCode Online Judge](https://leetcode.com/) is a website containing many **algorithm questions**. Most of them are real interview questions of **Google, Facebook, LinkedIn, Apple**, etc. This repo shows my solutions by C++ with the code style strictly follows the [RayWenderlich C++ Style Guide](https://github.com/raywenderlich/C++-style-guide). Please feel free to reference and **STAR** to support this repo, thank you!

![Leetcode](./logo.png?style=centerme)

## Progress
[Problem Status](#problem-status) shows the latest progress to all 1000+ questions. Currently we have 323 completed solutions. Note: questions with &hearts; mark means that you have to **Subscript to premium membership** of LeetCode to unlock them.

## Contributors

<p align="center">
  <img src="./Leetcode_Contributors.png">
</p>

## Data Structures
* [Array](#array)
* [String](#string)
* [Linked List](#linked-list)
* [Stack](#stack)
* [Queue](#queue)
* [Tree](#tree)
* [Dynamic programming](#dynamic-programming)
* [Depth-first search](#depth-first-search)
* [Breadth-first search](#breadth-first-search)
* [Math](#math)
* [Search](#search)
* [Sort](#sort)
* [Graph](#graph)
* [Design](#design)

## Companies
* [Google](#google)
* [Facebook](#facebook)
* [Snapchat](#snapchat)
* [Uber](#uber)
* [Airbnb](#airbnb)
* [LinkedIn](#linkedin)
* [Amazon](#amazon)
* [Microsoft](#microsoft)


## Array
| Title | Solution | Difficulty | Time | Space | ID |
| ----- | -------- | ---------- | ---- | ----- | ----- |
[Verify an Alien Dictionary](https://leetcode.com/problems/verifying-an-alien-dictionary/)|[C++](Array/VerifyingAlienDictionary.cpp)| Easy| O(n)| O(n)|
[Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/)|[C++](Array/SortArrayByParity.cpp)| Easy| O(n)| O(n)|
[Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/)| [C++](./Array/MaxConsecutiveOnes.cpp)| Easy| O(n)| O(1)|
[Heaters](https://leetcode.com/problems/heaters/)| [C++](./Array/Heaters.cpp)| Easy| O(nlogn)| O(1)|
[Number of Boomerangs](https://leetcode.com/problems/number-of-boomerangs/)| [C++](./Array/NumberBoomerangs.cpp)| Easy| O(n ^ 2)| O(n)|
[Island Perimeter](https://leetcode.com/problems/island-perimeter/)| [C++](./Array/IslandPerimeter.cpp)| Easy| O(nm)| O(1)|
[Majority Element](https://leetcode.com/problems/majority-element/)| [C++](./Array/MajorityElement.cpp)| Easy| O(n)| O(1)|
[Majority Element II](https://leetcode.com/problems/majority-element-ii/)| [C++](./Array/MajorityElementII.cpp)| Medium| O(n)| O(1)|
[First Missing Positive](https://leetcode.com/problems/first-missing-positive/)| [C++](./Array/FirstMissingPositive.cpp)| Hard| O(n)| O(n)|
[Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/)| [C++](./Array/IntersectionTwoArrays.cpp)| Easy| O(n)| O(n)|
[Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/)| [C++](./Array/IntersectionTwoArraysII.cpp)| Easy| O(n)| O(n)|
[Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)| [C++](./Array/ContainsDuplicate.cpp)| Easy| O(n)| O(n)|
[Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/)| [C++](./Array/ContainsDuplicateII.cpp)| Easy| O(n)| O(n)|
[Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)| [C++](./Array/RemoveDuplicatesFromSortedArray.cpp)| Easy| O(n)| O(1)|
[Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)| [C++](./Array/RemoveDuplicatesFromSortedArrayII.cpp)| Medium| O(n)| O(1)|
[Move Zeroes](https://leetcode.com/problems/move-zeroes/)| [C++](./Array/MoveZeroes.cpp)| Easy| O(n)| O(1)|
[Remove Element](https://leetcode.com/problems/remove-element/)| [C++](./Array/RemoveElement.cpp)| Easy| O(n)| O(1)|
[Strobogrammatic Number](https://leetcode.com/problems/strobogrammatic-number/)| [C++](./Array/StrobogrammaticNumber.cpp)| Easy| O(n)| O(1)|
[Can Place Flowers](https://leetcode.com/problems/can-place-flowers/)| [C++](./Array/CanPlaceFlowers.cpp)| Easy| O(n)| O(1)|
[Two Sum](https://leetcode.com/problems/two-sum/)| [C++](./Array/TwoSum.cpp)| Easy| O(n)| O(n)|
[Two Sum II - Input array is sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)| [C++](./Array/TwoSumII.cpp)| Easy| O(n)| O(1)|
[Two Sum III - Data structure design](https://leetcode.com/problems/two-sum-iii-data-structure-design/)| [C++](./Array/TwoSumIII.cpp)| Easy| O(n)| O(1)|
[Two Sum Less Than K](https://leetcode.com/problems/two-sum-less-than-k/)| [C++](./Array/TwoSumLessThanK.cpp)| Easy| O(nlogn)| O(n)|
[3Sum](https://leetcode.com/problems/3sum/)| [C++](./Array/ThreeSum.cpp)| Medium| O(n^2)| O(nC3)|
[3Sum Closest](https://leetcode.com/problems/3sum-closest/)| [C++](./Array/ThreeSumClosest.cpp)| Medium| O(n^2)| O(nC3)|
[4Sum](https://leetcode.com/problems/4sum/)| [C++](./Array/FourSum.cpp)| Medium| O(n^3)| O(nC4)|
[Increasing Triplet Subsequence](https://leetcode.com/problems/increasing-triplet-subsequence/)| [C++](./Array/IncreasingTripletSubsequence.cpp)| Medium| O(n)| O(1)|
[Summary Ranges](https://leetcode.com/problems/summary-ranges/)| [C++](./Array/SummaryRanges.cpp)| Medium| O(n)| O(n)|
[Range Sum Query 2D - Immutable](https://leetcode.com/problems/range-sum-query-2d-immutable/)| [C++](./Array/NumMatrix.cpp)| Medium| O(mn)| O(mn)|
[Missing Ranges](https://leetcode.com/problems/missing-ranges/)| [C++](./Array/MissingRanges.cpp)| Medium| O(n)| O(1)|
[Asteroid Collision](https://leetcode.com/problems/asteroid-collision/)| [C++](./Array/735.AsteroidCollision.cpp)| Medium| O(n)| O(n)|
[Maximize Distance to Closest Person](https://leetcode.com/problems/maximize-distance-to-closest-person/)| [C++](./Array/MaximizeDistanceToClosestPerson.cpp)| Easy| O(n)| O(1)|
[Exam Room](https://leetcode.com/problems/exam-room/)| [C++](./Array/ExamRoom.cpp)| Medium| O(n)| O(n)|
[Shortest Word Distance](https://leetcode.com/problems/shortest-word-distance/)| [C++](./Array/ShortestWordDistance.cpp)| Easy| O(n)| O(1)|
[Shortest Word Distance II](https://leetcode.com/problems/shortest-word-distance-ii/)| [C++](./Array/ShortestWordDistanceII.cpp)| Medium| O(n)| O(n)|
[Shortest Word Distance III](https://leetcode.com/problems/shortest-word-distance-iii/)| [C++](./Array/ShortestWordDistanceIII.cpp)| Medium| O(n)| O(1)|
[Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)| [C++](./Array/MinimumSizeSubarraySum.cpp)| Medium| O(n)| O(1)|
[Maximum Size Subarray Sum Equals k](https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/)| [C++](./Array/MaximumSizeSubarraySumEqualsK.cpp)| Medium| O(n)| O(n)|
[Smallest Range](https://leetcode.com/problems/smallest-range/)| [C++](./Array/SmallestRange.cpp)| Hard | O(nm)| O(nm)|
[Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)| [C++](./Array/ProductExceptSelf.cpp)| Medium| O(n)| O(1)|
[Rotate Array](https://leetcode.com/problems/rotate-array/)| [C++](./Array/RotateArray.cpp)| Easy| O(n)| O(1)|
[Rotate Image](https://leetcode.com/problems/rotate-image/)| [C++](./Array/RotateImage.cpp)| Medium| O(n^2)| O(1)|
[Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)| [C++](./Array/SpiralMatrix.cpp)| Medium| O(n^2)| O(1)|
[Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii/)| [C++](./Array/SpiralMatrixII.cpp)| Medium| O(n^2)| O(1)|
[Diagonal Traverse](https://leetcode.com/problems/diagonal-traverse/description/)| [C++](./Array/DiagonalTraverse.cpp)| Medium| O(mn)| O(1)|
[Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)| [C++](./Array/ValidSudoku.cpp)| Easy| O(n^2)| O(n)|
[Set Matrix Zero](https://leetcode.com/problems/set-matrix-zeroes/)| [C++](./Array/SetMatrixZeroes.cpp)| Medium| O(n^2)| O(1)|
[Next Permutation](https://leetcode.com/problems/next-permutation/)| [C++](./Array/NextPermutation.cpp)| Medium| O(n)| O(1)|
[Gas Station](https://leetcode.com/problems/gas-station/)| [C++](./Array/GasStation.cpp)| Medium| O(n)| O(1)|
[Game of Life](https://leetcode.com/problems/game-of-life/)| [C++](./Array/GameLife.cpp)| Medium| O(n)| O(1)|
[Task Scheduler](https://leetcode.com/problems/task-scheduler/)| [C++](./Array/TaskScheduler.cpp)| Medium| O(nlogn)| O(n)|
[Validate IP Address](https://leetcode.com/problems/validate-ip-address/)| [C++](./Array/ValidateIPAddress.cpp)| Medium| O(n)| O(1)|
[Sliding Window Maximum ](https://leetcode.com/problems/sliding-window-maximum/)| [C++](./Array/SlidingWindowMaximum.cpp)| Hard| O(n)| O(n)|
[Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)| [C++](./Array/LongestConsecutiveSequence.cpp)| Hard| O(n)| O(n)|
[Create Maximum Number](https://leetcode.com/problems/create-maximum-number/)| [C++](./Array/CreateMaximumNumber.cpp)| Hard| O(n^2)| O(n)|
[Find All Numbers Disappeared in an Array](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/)| [C++](./Array/FindDisappearedNumbers.cpp)| Easy| O(n)| O(1)|

## String
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Fizz Buzz](https://leetcode.com/problems/fizz-buzz/)| [C++](./String/FizzBuzz.cpp)| Easy| O(n)| O(1)|
[First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)| [C++](./String/FirstUniqueCharacterInString.cpp)| Easy| O(n)| O(1)|
[Keyboard Row](https://leetcode.com/problems/keyboard-row/)| [C++](./String/KeyboardRow.cpp)| Easy| O(nm)| O(n)|
[Valid Word Abbreviation](https://leetcode.com/problems/valid-word-abbreviation/)| [C++](./String/ValidWordAbbreviation.cpp)| Easy| O(n)| O(n)|
[Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)| [C++](./String/ValidPalindrome.cpp)| Easy| O(n)| O(n)|
[Valid Palindrome II](https://leetcode.com/problems/valid-palindrome-ii/)| [C++](./String/ValidPalindromeII.cpp)| Easy| O(n)| O(n)|
[Detect Capital](https://leetcode.com/problems/detect-capital/)| [C++](./String/DetectCapital.cpp)| Easy| O(n)| O(1)|
[Count and Say](https://leetcode.com/problems/count-and-say/)| [C++](./String/CountAndSay.cpp)| Easy| O(n^2)| O(1)|
[Flip Game](https://leetcode.com/problems/flip-game/)| [C++](./String/FlipGame.cpp)| Easy| O(n)| O(n)|
[Implement strStr()](https://leetcode.com/problems/implement-strstr/)| [C++](./String/StrStr.cpp)| Easy| O(nm)| O(n)|
[Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/)| [C++](./String/IsomorphicStrings.cpp)| Easy| O(n)| O(n)|
[Reverse String](https://leetcode.com/problems/reverse-string/)| [C++](./String/ReverseString.cpp)| Easy| O(n)| O(n)|
[Reverse String II](https://leetcode.com/problems/reverse-string-ii/)| [C++](./String/ReverseStringII.cpp)| Easy| O(n)| O(n)|
[Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string/)| [C++](./String/ReverseVowelsOfAString.cpp)| Easy| O(n)| O(n)|
[Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)| [C++](./String/ReverseWordsString.cpp)| Medium| O(n)| O(1)|
[Reverse Words in a String II](https://leetcode.com/problems/reverse-words-in-a-string-ii/)| [C++](./String/ReverseWordsStringII.cpp)| Medium| O(n)| O(1)|
[Reverse Words in a String III](https://leetcode.com/problems/reverse-words-in-a-string-iii/)| [C++](./String/ReverseWordsStringIII.cpp)| Easy| O(n)| O(1)|
[Length of Last Word](https://leetcode.com/problems/length-of-last-word/)| [C++](./String/AddStrings.cpp)| Easy| O(n)| O(n)|
[String Compression](https://leetcode.com/problems/string-compression/)| [C++](./String/StringCompression.cpp)| Easy| O(n)| O(1)|
[Add Strings](https://leetcode.com/problems/add-strings/)| [C++](./String/LengthLastWord.cpp)| Easy| O(n)| O(1)|
[Shortest Distance to a Character](https://leetcode.com/problems/shortest-distance-to-a-character/)| [C++](./String/ShortestDistanceToACharacter.cpp)| Easy| O(n)| O(1)|
[Multiply Strings](https://leetcode.com/problems/multiply-strings/)| [C++](./String/MultiplyStrings.cpp)| Medium| O(n)| O(1)|
[Palindrome Permutation](https://leetcode.com/problems/palindrome-permutation/)| [C++](./String/PalindromePermutation.cpp)| Easy| O(n)| O(n)|
[Valid Anagram](https://leetcode.com/problems/valid-anagram/)| [C++](./String/ValidAnagram.cpp)| Easy| O(n)| O(n)|
[Ransom Note](https://leetcode.com/problems/ransom-note/)| [C++](./String/RansomNote.cpp)| Easy| O(n)| O(n)|
[Group Anagrams](https://leetcode.com/problems/anagrams/)| [C++](./String/GroupAnagrams.cpp)| Medium| O(nmlogm + nlogn)| O(n)
[Find Duplicate File in System](https://leetcode.com/problems/find-duplicate-file-in-system/)| [C++](./String/FindDuplicateFileInSystem.cpp)| Medium| O(nm)| O(n)
[Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)| [C++](./String/LongestCommonPrefix.cpp)| Easy| O(nm)| O(m)|
[Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)| [C++](./String/LongestSubstringWithoutRepeatingCharacters.cpp)| Medium| O(n)| O(n)|
[One Edit Distance](https://leetcode.com/problems/one-edit-distance/)| [C++](./String/OneEditDistance.cpp)| Medium| O(n)| O(n)|
[Word Pattern](https://leetcode.com/problems/word-pattern/)| [C++](./String/WordPattern.cpp)| Easy| O(n)| O(n)|
[Permutation in String](https://leetcode.com/problems/permutation-in-string/)| [C++](/.String/PermutationInString.cpp)| Medium| O(nm)| O(n)|
[Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/)| [C++](/.String/FindAllAnagramsInAString.cpp)| Medium| O(n)| O(n)|
[Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)| [C++](./String/MinimumWindowSubstring.cpp)| Hard| O(n^2)| O(n)|
[Longest Substring with At Most Two Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/)| [C++](./String/LongestSubstringMostTwoDistinctCharacters.cpp)| Hard| O(n)| O(n)|
[Longest Substring with At Most K Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/)| [C++](./String/LongestSubstringMostKDistinctCharacters.cpp)| Hard| O(n)| O(n)|
[Text Justification](https://leetcode.com/problems/text-justification/)| [C++](./String/TextJustification.cpp)| Hard| O(n)| O(n)|
[Find the Closest Palindrome](https://leetcode.com/problems/find-the-closest-palindrome/)| [C++](./String/FindClosestPalindrome.cpp)| Hard| O(n)| O(n)|

## Linked List
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)| [C++](./LinkedList/ReverseLinkedList.cpp)| Easy| O(n)| O(1)|
[Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)| [C++](./LinkedList/PalindromeLinkedList.cpp)| Easy| O(n)| O(1)|
[Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)| [C++](./LinkedList/SwapNodesInPairs.cpp)| Easy| O(n)| O(1)|
[Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)| [C++](./LinkedList/RemoveLinkedListElements.cpp)| Easy| O(n)| O(1)|
[Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)| [C++](./LinkedList/RemoveDuplicatesFromSortedList.cpp)| Easy| O(n)| O(1)|
[Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)| [C++](./LinkedList/RemoveDuplicatesFromSortedListII.cpp)| Medium| O(n)| O(1)|
[Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)| [C++](./LinkedList/RemoveNthFromEnd.cpp)| Easy| O(n)| O(1)|
[Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/)| [C++](./LinkedList/OddEvenLinkedList.cpp)| Medium| O(n)| O(1)|
[Rotate List](https://leetcode.com/problems/rotate-list/)| [C++](./LinkedList/RotateList.cpp)| Medium| O(n)| O(1)|
[Reorder List](https://leetcode.com/problems/reorder-list/)| [C++](./LinkedList/ReorderList.cpp)| Medium| O(n)| O(1)|
[Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)| [C++](./LinkedList/MergeTwoSortedLists.cpp)| Easy| O(n)| O(1)|
[Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)| [C++](./LinkedList/MergeKSortedLists.cpp)| Hard| O(mlogn)| O(1)|
[Partition List](https://leetcode.com/problems/partition-list/)| [C++](./LinkedList/PartitionList.cpp)| Medium| O(n)| O(1)|
[LRU Cache](https://leetcode.com/problems/lru-cache/) | [C++](./LinkedList/LRUCache.cpp) | Hard| O(1)| O(1)|
[LFU Cache](https://leetcode.com/problems/lfu-cache/) | [C++](./LinkedList/LFUCache.cpp) | Hard| O(1)| O(1)|

## Stack
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Min Stack](https://leetcode.com/problems/min-stack/)| [C++](./Stack/MinStack.cpp)| Easy| O(1)| O(n)|
[Max Stack](https://leetcode.com/problems/max-stack/)| [C++](./Stack/MaxStack.cpp)| Easy| O(n)| O(n)|
[Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)| [C++](./Stack/ValidParentheses.cpp)| Easy| O(n)| O(n)|
[Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/)| [C++](./Stack/LongestValidParentheses.cpp)| Hard| O(n)| O(n)|
[Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)| [C++](./Stack/EvaluateReversePolishNotation.cpp)| Medium| O(n)| O(n)|
[Exclusive Time of Functions](https://leetcode.com/problems/exclusive-time-of-functions/)| [C++](./Stack/ExclusiveTimeFunctions.cpp) | Medium| O(n)| O(n)|
[Simplify Path](https://leetcode.com/problems/simplify-path/)| [C++](./Stack/SimplifyPath.cpp)| Medium| O(n)| O(n)|
[Remove K Digits](https://leetcode.com/problems/remove-k-digits/)| [C++](./Stack/RemoveKDigits.cpp)| Medium| O(n)| O(n)|
[Ternary Expression Parser](https://leetcode.com/problems/ternary-expression-parser/)| [C++](./Stack/TernaryExpressionParser.cpp)| Medium| O(n)| O(n)|
[Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)| [C++](./Stack/PreorderTraversal.cpp)| Medium| O(n)| O(n)|
[Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)| [C++](./Stack/InorderTraversal.cpp)| Medium| O(n)| O(n)|
[Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/)| [C++](./Stack/BinarySearchTreeIterator.cpp)| Medium| O(n)| O(n)|
[Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/)| [C++](./Stack/PostorderTraversal.cpp)| Hard| O(n)| O(n)|
[Decode String](https://leetcode.com/problems/decode-string/)| [C++](./Stack/DecodeString.cpp)| Medium| O(n)| O(n)|
[Basic Calculator](https://leetcode.com/problems/basic-calculator/)| [C++](./Stack/BasicCalculator.cpp)| Hard| O(n)| O(n)|

## Queue
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks)| [C++](./Queue/ImplementQueueUsingStacks.cpp)| Easy| O(n)| O(n)|

## Tree
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Same Tree](https://oj.leetcode.com/problems/same-tree/)| [C++](./Tree/SameTree.cpp)| Easy| O(n)| O(n)|
[Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)| [C++](./Tree/SymmetricTree.cpp)| Easy| O(n)| O(n)|
[Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)| [C++](./Tree/InvertBinaryTree.cpp)| Easy| O(n)| O(n)|
[Binary Tree Upside Down](https://leetcode.com/problems/binary-tree-upside-down/)| [C++](./Tree/BinaryTreeUpsideDown.cpp)| Medium| O(n)| O(1)|
[Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/)| [C++](./Tree/MinimumDepthOfBinaryTree.cpp)| Easy| O(n)| O(1)|
[Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)| [C++](./Tree/MaximumDepthOfBinaryTree.cpp)| Easy| O(n)| O(1)|
[Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)| [C++](./Tree/DiameterBinaryTree.cpp)| Easy| O(n)| O(1)|
[Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)| [C++](./Tree/BalancedBinaryTree.cpp)| Easy|  O(n)| O(n)|
[Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/)| [C++](./Tree/SumLeftLeaves.cpp)| Easy|  O(n)| O(1)|
[Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/)| [C++](./Tree/FlattenBinaryTreeLinkedList.cpp)| Medium| O(n)| O(1)|
[Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)| [C++](./Tree/ConvertSortedArrayBinarySearchTree.cpp)| Easy| O(n)| O(1)|
[Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)| [C++](./Tree/ValidateBinarySearchTree.cpp)| Medium| O(n)| O(log n)|
[Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)| [C++](./Tree/102.BinaryTreeLevelOrderTraversal.cpp)| Easy| O(n)| O(n)|
[Binary Tree Level Order Traversal II](https://leetcode.com/problems/binary-tree-level-order-traversal-ii/)| [C++](./Tree/BinaryTreeLevelOrderTraversalII.cpp)| Easy| O(n)| O(n)|
[Merge Two Binary Trees](https://leetcode.com/problems/merge-two-binary-trees/description/) | [C++](./Tree/MergeTwoBinaryTrees.cpp) | Easy | O(n) | O(n) |
[Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)| [C++](./Tree/BinaryTreeZigzagLevelOrderTraversal.cpp)| Medium| O(n)| O(n)|
[Binary Tree Vertical Order Traversal](https://leetcode.com/problems/binary-tree-vertical-order-traversal/)| [C++](./Tree/BinaryTreeVerticalOrderTraversal.cpp)| Medium| O(n)| O(n)|
[Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)| [C++](./Tree/KthSmallestElementBST.cpp)| Medium| O(n)| O(n)|
[Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)| [C++](./Tree/BinaryTreeRightSideView.cpp)| Medium| O(n)| O(n)|
[Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)| [C++](./Tree/ConstructBinaryTreePreorderInorder.cpp)| Medium| O(nlogn)| O(1)|
[Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)| [C++](./Tree/ConstructBinaryTreeInorderPostorder.cpp)| Medium| O(nlogn)| O(1)|
[Path Sum](https://leetcode.com/problems/path-sum/)| [C++](./Tree/PathSum.cpp)| Easy| O(n)| O(n)|
[Path Sum II](https://leetcode.com/problems/path-sum-ii/)| [C++](./Tree/PathSumII.cpp)| Medium| O(n)| O(n)|
[Path Sum III](https://leetcode.com/problems/path-sum-iii/)| [C++](./Tree/PathSumIII.cpp)| Easy| O(n^2)| O(1)|
[Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/)| [C++](./Tree/BinaryTreePaths.cpp)| Easy| O(n)| O(n)|
[Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)| [C++](./Tree/BinaryTreeMaximumPathSum.cpp)| Hard| O(n)| O(1)|
[House Robber III](https://leetcode.com/problems/house-robber-iii/)| [C++](./Tree/HouseRobberIII.cpp)| Medium| O(n)| O(1)|
[Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/)| [C++](./Tree/UniqueBinarySearchTrees.cpp)| Medium| O(n^2)| O(n)|
[Recover Binary Search Tree](https://leetcode.com/problems/recover-binary-search-tree/)| [C++](./Tree/RecoverBinarySearchTree.cpp)| Hard| O(n)| O(1)|
[Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)| [C++](./Tree/SerializeDeserializeBinaryTree.cpp)| Hard| O(n)| O(n)|
[Serialize and Deserialize N-ary Tree](https://leetcode.com/problems/serialize-and-deserialize-n-ary-tree/)| [C++](./Tree/SerializeDeserializeNAryTree.cpp)| Hard| O(n)| O(n)|

## Dynamic programming
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Nested List Weight Sum](https://leetcode.com/problems/nested-list-weight-sum/)| [C++](./DP/NestedListWeightSum.cpp)| Easy| O(n)| O(1)|
[Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)| [C++](./DP/ClimbingStairs.cpp)| Easy| O(n)| O(1)|
[Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/)| [C++](./DP/MinCostClimbingStairs.cpp)| Easy| O(n)| O(n)|
[Unique Paths](https://leetcode.com/problems/unique-paths/)| [C++](./DP/UniquePaths.cpp)| Medium| O(mn)| O(mn)|
[Unique Paths II](https://leetcode.com/problems/unique-paths-ii/)| [C++](./DP/UniquePathsII.cpp)| Medium| O(mn)| O(mn)|
[Nested List Weight Sum II](https://leetcode.com/problems/nested-list-weight-sum-ii/)| [C++](./DP/NestedListWeightSumII.cpp)| Medium| O(n)| O(n)|
[Flip Game II](https://leetcode.com/problems/flip-game-ii/)| [C++](./DP/FlipGameII.cpp)| Medium| O(n)| O(n)|
[Can I Win](https://leetcode.com/problems/can-i-win/)| [C++](./DP/CanIWin.cpp)| Medium| O(2^n)| O(n)|
[Decode Ways](https://leetcode.com/problems/decode-ways/)| [C++](./DP/DecodeWays.cpp) | Medium| O(n)|O(n)|
[Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/)| [C++](./DP/MinimumPathSum.cpp)| Medium| O(mn)| O(mn)|
[Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)| [C++](./DP/GenerateParentheses.cpp)| Medium| O(2^n)| O(n)|
[Different Ways to Add Parentheses](https://leetcode.com/problems/different-ways-to-add-parentheses/)| [C++](./DP/DifferentWaysAddParentheses.cpp)| Medium| O(n^n)| O(n)|
[Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)| [C++](./DP/BestTimeBuySellStock.cpp)| Easy| O(n)| O(1)|
[Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/)| [C++](./DP/BestTimeBuySellStockII.cpp)| Medium| O(n)| O(1)|
[Best Time to Buy and Sell Stock III](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/)| [C++](./DP/BestTimeBuySellStockIII.cpp)| Hard| O(n)| O(n)|
[Best Time to Buy and Sell Stock IV](https://leetcode.com/problems/https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/)| [C++](./DP/BestTimeBuySellStockIV.cpp)| Hard| O(n^2)| O(n)|
[Best Time to Buy and Sell Stock with Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/)| [C++](./DP/BestTimeBuySellStockCooldown.cpp)| Medium| O(n^2)| O(n)|
[Maximum Sum of 3 Non-Overlapping Subarrays](https://leetcode.com/problems/maximum-sum-of-3-non-overlapping-subarrays/)| [C++](./DP/MaximumSumThreeNonOverlappingSubarrays.cpp)| Hard| O(n)| O(n)|
[Coin Change](https://leetcode.com/problems/coin-change/)| [C++](./DP/CoinChange.cpp)| Medium| O(n^2)| O(n)|
[Coin Change II](https://leetcode.com/problems/coin-change-ii/)| [C++](./DP/CoinChangeII.cpp)| Medium| O(n^2)| O(n)|
[Paint House](https://leetcode.com/problems/paint-house/)| [C++](./DP/PaintHouse.cpp)| Easy| O(n)| O(n)|
[Paint House II](https://leetcode.com/problems/paint-house-ii/)| [C++](./DP/PaintHouseII.cpp)| Hard| O(n)| O(1)|
[Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)| [C++](./DP/LongestIncreasingSubsequence.cpp)| Medium| O(nlogn)| O(n)|
[Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/)| [C++](./DP/PalindromicSubstrings.cpp)| Medium| O(n^2)| O(n^2)|
[Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)| [C++](./DP/LongestPalindromicSubstring.cpp)| Medium| O(n^2)| O(n^2)|
[Perfect Squares](https://leetcode.com/problems/perfect-squares/)| [C++](./DP/PerfectSquares.cpp)| Medium| O(n^2)| O(n)|
[House Robber](https://leetcode.com/problems/house-robber/)| [C++](./DP/HouseRobber.cpp)| Easy| O(n)| O(1)|
[House Robber II](https://leetcode.com/problems/house-robber-ii/)| [C++](./DP/HouseRobberII.cpp)| Medium| O(n)| O(1)|
[Paint Fence](https://leetcode.com/problems/paint-fence/)| [C++](./DP/PaintFence.cpp)| Easy| O(n)| O(n)|
[Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)| [C++](./DP/MaximumSubarray.cpp)| Medium| O(n)| O(1)|
[Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)| [C++](./DP/MaximumProductSubarray.cpp)| Medium| O(n)| O(1)|
[Maximal Square](https://leetcode.com/problems/maximal-square/)| [C++](./DP/MaximalSquare.cpp)| Medium| O(mn)| O(mn)|
[Edit Distance](https://leetcode.com/problems/edit-distance/)| [C++](./DP/EditDistance.cpp)| Hard| O(mn)| O(mn)|
[Combination Sum IV](https://leetcode.com/problems/combination-sum-iv/)| [C++](./DP/CombinationSumIV.cpp)| Medium| O(2^n)| O(n)|
[Triangle](https://leetcode.com/problems/triangle/)| [C++](./DP/Triangle.cpp)| Medium| O(2^n)| O(m)|
[Wiggle Subsequence](https://leetcode.com/problems/wiggle-subsequence/)| [C++](./DP/WiggleSubsequence.cpp)| Medium| O(n)| O(1)|
[Wildcard Matching](https://leetcode.com/problems/wildcard-matching/)| [C++](./DP/WildcardMatching.cpp)| Hard| O(mn)| O(mn)|
[Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/)| [C++](./DP/RegularExpressionMatching.cpp)| Hard| O(mn)| O(mn)|
[Minimum Window Subsequence](https://leetcode.com/problems/minimum-window-subsequence/)| [C++](./DP/MinimumWindowSubsequence.cpp)| Hard| O(mn)| O(mn)|
[Guess Number Higher or Lower II](https://leetcode.com/problems/guess-number-higher-or-lower-ii/)| [C++](./DP/GuessNumberHigherOrLowerII.cpp)| Medium| O(nlogn)| O(n^2)|
[Burst Ballons](https://leetcode.com/problems/burst-balloons/)| [C++](./DP/BurstBalloons.cpp)| Hard| O(n^3)| O(n)|
[Frog Jump](https://leetcode.com/problems/frog-jump/)| [C++](./DP/FrogJump.cpp)| Hard| O(n^2)| O(n)|
[Jump Game](https://leetcode.com/problems/jump-game/)| [C++](./DP/JumpGame.cpp)| Medium| O(n)| O(1)|
[Dungeon Game](https://leetcode.com/problems/dungeon-game/)| [C++](./DP/DungeonGame.cpp)| Hard| O(nm)| O(nm)|


## Depth-first search
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Permutations](https://leetcode.com/problems/permutations/)| [C++](./DFS/Permutations.cpp)| Medium| O(2^n)| O(n)|
[Permutations II](https://leetcode.com/problems/permutations-ii/)| [C++](./DFS/PermutationsII.cpp)| Medium| O(2^n)| O(n)|
[Subsets](https://leetcode.com/problems/subsets/)| [C++](./DFS/Subsets.cpp)| Medium| O(n^n)| O(n)|
[Subsets II](https://leetcode.com/problems/subsets-ii/)| [C++](./DFS/SubsetsII.cpp)| Medium| O(2^n)| O(n)|
[Combinations](https://leetcode.com/problems/combinations/)| [C++](./DFS/Combinations.cpp)| Medium| O(2^n)| O(n)|
[Combination Sum](https://leetcode.com/problems/combination-sum/)| [C++](./DFS/CombinationSum.cpp)| Medium| O(2^n)| O(n)|
[Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)| [C++](./DFS/CombinationSumII.cpp)| Medium| O(2^n)| O(n)|
[Combination Sum III](https://leetcode.com/problems/combination-sum-iii/)| [C++](./DFS/CombinationSumIII.cpp)| Medium| O(2^n)| O(n)|
[Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)| [C++](./DFS/LetterCombinationsPhoneNumber.cpp)| Medium| O(4^n)| O(n)|
[Factor Combinations](https://leetcode.com/problems/factor-combinations/)| [C++](./DFS/FactorCombinations.cpp)| Medium| O(n^n))| O(2^n - 1)|
[Strobogrammatic Number II](https://leetcode.com/problems/strobogrammatic-number-ii/)| [C++](./DFS/StrobogrammaticNumberII.cpp)| Medium| O(m^n)| O(n)|
[Generalized Abbreviation](https://leetcode.com/problems/generalized-abbreviation/)| [C++](./DFS/GeneralizedAbbreviation.cpp)| Medium| O(n^n)| O(2^n)|
[Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)| [C++](./DFS/PalindromePartitioning.cpp)| Medium| O(n^n)| O(n)|
[Is Graph Bipartite](https://leetcode.com/problems/is-graph-bipartite/)| [C++](./DFS/IsGraphBipartite.cpp)| Medium| O(n)| O(n)|
[Number of Islands](https://leetcode.com/problems/number-of-islands/)| [C++](./DFS/NumberofIslands.cpp)| Medium| O((mn)^2)| O(1)|
[Walls and Gates](https://leetcode.com/problems/walls-and-gates/)| [C++](./DFS/WallsGates.cpp)| Medium| O(n^n)| O(2^n)|
[Word Search](https://leetcode.com/problems/word-search/)| [C++](./DFS/WordSearch.cpp)| Medium| O((mn * 4 ^ (k - 1))| O(mn)|
[Word Search II](https://leetcode.com/problems/word-search-ii/)| [C++](./DFS/WordSearchII.cpp)| Hard| O(((mn)^2))| O(n^2)|
[Add and Search Word - Data structure design](https://leetcode.com/problems/add-and-search-word-data-structure-design/)| [C++](./DFS/WordDictionary.cpp)| Medium| O(n)| O(n)|
[Partition to K Equal Sum Subsets](https://leetcode.com/problems/partition-to-k-equal-sum-subsets/)| [C++](./DFS/PartitionKEqualSumSubsets.cpp)| Medium| O(k^n)| O(n)|
[N-Queens](https://leetcode.com/problems/n-queens/)| [C++](./DFS/NQueens.cpp)| Hard| O((n^n))| O(n^2)|
[N-Queens II](https://leetcode.com/problems/n-queens-ii/)| [C++](./DFS/NQueensII.cpp)| Hard| O((n^n))| O(n)|
[Word Squares](https://leetcode.com/problems/word-squares/)| [C++](./DFS/WordSquares.cpp)| Hard| O((n^2))| O(n^2)|
[Word Pattern II](https://leetcode.com/problems/word-pattern-ii/)| [C++](./DFS/WordPatternII.cpp)| Hard| O(n^n)| O(n)|
[Sudoku Solver](https://leetcode.com/problems/sudoku-solver/)| [C++](./DFS/SudokuSolver.cpp)| Hard| O(n^4)| O(1)|
[Remove Invalid Parentheses](https://leetcode.com/problems/remove-invalid-parentheses/)| [C++](./DFS/RemoveInvalidParentheses.cpp)| Hard| O(n^n)| O(n)|
[Expression Add Operators](https://leetcode.com/problems/expression-add-operators/)| [C++](./DFS/ExpressionAddOperators.cpp)| Hard| O(n^n)| O(n)|

## Breadth-first search
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Word Ladder](https://leetcode.com/problems/word-ladder/)| [C++](./BFS/WordLadder.cpp)| Medium| O(nm)| O(nm)|
[Evaluate Division](https://leetcode.com/problems/evaluate-division/)| [C++](./BFS/EvaluateDivision.cpp)| Medium| O(n^2)| O(n)|
[Shortest Distance from All Buildings](https://leetcode.com/problems/shortest-distance-from-all-buildings/)| [C++](./BFS/ShortestDistanceAllBuildings.cpp)| Hard| O((mn)^2)| O(mn)|

## Math
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Add Binary](https://leetcode.com/problems/add-binary/)| [C++](./Math/AddBinary.cpp)| Easy| O(n)| O(n)|
[Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)| [C++](./Math/AddTwoNumbers.cpp)| Medium| O(n)| O(1)|
[Add Digits](https://leetcode.com/problems/add-digits/)| [C++](./Math/AddDigits.cpp)| Easy| O(1)| O(1)|
[Plus One](https://leetcode.com/problems/plus-one/)| [C++](./Math/PlusOne.cpp)| Easy| O(n)| O(1)|
[Missing Number](https://leetcode.com/problems/missing-number/)| [C++](./Math/MissingNumber.cpp)| Easy| O(n)| O(1)|
[Divide Two Integers](https://leetcode.com/problems/divide-two-integers/)| [C++](./Math/DivideTwoIntegers.cpp)| Medium| O(logn)| O(1)|
[Number Complement](https://leetcode.com/problems/number-complement/)| [C++](./Math/NumberComplement.cpp)| Easy| O(n)| O(1)|
[Hamming Distance](https://leetcode.com/problems/hamming-distance/)| [C++](./Math/HammingDistance.cpp)| Easy| O(n)| O(1)|
[Integer Break](https://leetcode.com/problems/integer-break/)| [C++](./Math/IntegerBreak.cpp)| Medium| O(logn)| O(1)|
[Factorial Trailing Zeroes](https://leetcode.com/problems/factorial-trailing-zeroes/)| [C++](./Math/FactorialTrailingZeroes.cpp)| Medium | O(logn)| O(1)|
[Happy Number](https://leetcode.com/problems/happy-number/)| [C++](./Math/HappyNumber.cpp)| Easy| O(n)| O(n)|
[Single Number](https://leetcode.com/problems/single-number/)| [C++](./Math/SingleNumber.cpp)| Medium| O(n)| O(1)|
[Ugly Number](https://leetcode.com/problems/ugly-number/)| [C++](./Math/UglyNumber.cpp)| Easy| O(logn)| O(1)|
[Ugly Number II](https://leetcode.com/problems/ugly-number-ii/)| [C++](./Math/UglyNumberII.cpp)| Medium| O(n)| O(n)|
[Super Ugly Number](https://leetcode.com/problems/super-ugly-number/)| [C++](./Math/SuperUglyNumber.cpp)| Medium| O(n^2)| O(n)|
[Count Primes](https://leetcode.com/problems/count-primes/)| [C++](./Math/CountPrimes.cpp)| Easy| O(n)| O(n)|
[String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/)| [C++](./Math/Atoi.cpp)| Easy| O(n)| O(1)|
[Fraction to Recurring Decimal](https://leetcode.com/problems/fraction-to-recurring-decimal/)| [C++](./Math/FractionToRecurringDecimal.cpp) | Medium| O(logn)| O(n)|
[Pow(x, n)](https://leetcode.com/problems/isomorphic-strings/)| [C++](./Math/Pow.cpp)| Medium| O(logn)| O(1)|
[Power of Two](https://leetcode.com/problems/power-of-two/)| [C++](./Math/PowerTwo.cpp)| Easy| O(1)| O(1)|
[Power of Three](https://leetcode.com/problems/power-of-three/)| [C++](./Math/PowerThree.cpp)| Easy| O(1)| O(1)|
[Super Power](https://leetcode.com/problems/super-pow/)| [C++](./Math/SuperPow.cpp)| Medium| O(n)| O(1)|
[Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/)| [C++](./Math/SumTwoIntegers.cpp)| Easy| O(n)| O(1)|
[Reverse Integer](https://leetcode.com/problems/reverse-integer/)| [C++](./Math/ReverseInteger.cpp)| Easy| O(n)| O(1)|
[Excel Sheet Column Number](https://leetcode.com/problems/excel-sheet-column-number/)| [C++](./Math/ExcelSheetColumnNumber.cpp)| Easy| O(n)| O(1)|
[Integer to Roman](https://leetcode.com/problems/integer-to-roman/)| [C++](./Math/IntegerToRoman.cpp)| Medium| O(n)| O(1)|
[Roman to Integer](https://leetcode.com/problems/roman-to-integer/)| [C++](./Math/RomanToInteger.cpp)| Easy| O(n)| O(n)|
[Integer to English Words](https://leetcode.com/problems/integer-to-english-words/)| [C++](./Math/IntegerEnglishWords.cpp)| Hard| O(n)| O(1)|
[Sparse Matrix Multiplication](https://leetcode.com/problems/sparse-matrix-multiplication/)| [C++](./Math/SparseMatrixMultiplication.cpp)| Medium| O(n^3)| O(n^2)|
[Rectangle Area](https://leetcode.com/problems/rectangle-area/)| [C++](./Math/RectangleArea.cpp)| Easy| O(1)| O(1)|
[Minimum Moves to Equal Array Elements](https://leetcode.com/problems/minimum-moves-to-equal-array-elements/)| [C++](./Math/MinimumMovesEqualArrayElements.cpp)| Easy| O(n)| O(1)|
[Pour Water](https://leetcode.com/problems/pour-water/)| [C++](./Math/TrappingRainWater.cpp)| Hard| O(n)| O(n)|
[Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)| [C++](./Math/TrappingRainWater.cpp)| Medium| O(nk)| O(1)|
[Container With Most Water](https://leetcode.com/problems/container-with-most-water/)| [C++](./Math/ContainerMostWater.cpp)| Medium| O(n)| O(1)|
[Counting Bits](https://leetcode.com/problems/counting-bits/)| [C++](./Math/CountingBits.cpp)| Medium| O(n)| O(n)|
[K-th Smallest in Lexicographical Order](https://leetcode.com/problems/k-th-smallest-in-lexicographical-order/)| [C++](./Math/KthSmallestLexicographicalOrder.cpp)| Hard| O(n)| O(1)|
[Gary Code](https://leetcode.com/problems/gray-code/)| [C++](./Math/GaryCode.cpp)| Medium| O(n)| O(2^n)|
[Permutation Sequence](https://leetcode.com/problems/permutation-sequence/)| [C++](./Math/PermutationSequence.cpp)| Medium| O(n^2)| O(1)|
[Line Reflection](https://leetcode.com/problems/line-reflection/)| [C++](./Math/LineReflection.cpp)| Medium| O(n)| O(n)|
[Valid Number](https://leetcode.com/problems/valid-number/)| [C++](./Math/ValidNumber.cpp)| Hard| O(n)| O(1)|

## Search
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Closest Binary Search Tree Value](https://leetcode.com/problems/closest-binary-search-tree-value/)| [C++](./Search/ClosestBinarySearchTreeValue.cpp)| Easy| O(logn)| O(1)|
[Closest Binary Search Tree Value II](https://leetcode.com/problems/closest-binary-search-tree-value-ii/)| [C++](./Search/ClosestBinarySearchTreeValueII.cpp)| Hard| O(n)| O(n)|
[Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)| [C++](./Search/SearchInRotatedSortedArray.cpp)| Hard| O(logn)| O(1)|
[Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/)| [C++](./Search/SearchInRotatedSortedArrayII.cpp)| Medium| O(logn)| O(1)|
[Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)| [C++](./Search/FindMinimumRotatedSortedArray.cpp)| Medium| O(logn)| O(1)|
[Find Minimum in Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/)| [C++](./Search/FindMinimumRotatedSortedArrayII.cpp)| Hard| O(logn)| O(1)|
[Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)| [C++](./Search/Search2DMatrix.cpp)| Medium| O(log(m + n))| O(1)|
[Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/)| [C++](./Search/Search2DMatrixII.cpp)| Medium| O(m + n)| O(1)|
[Search for a Range](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)| [C++](./Search/SearchForARange.cpp)| Medium| O(logn)| O(1)|
[Search Insert Position](https://leetcode.com/problems/search-insert-position/)| [C++](./Search/SearchInsertPosition.cpp)| Medium| O(logn)| O(1)|
[Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)| [C++](./Search/PeakIndexMountainArray.cpp)| Easy| O(logn)| O(1)|
[Find Peak Element](https://leetcode.com/problems/find-peak-element/)| [C++](./Search/FindPeakElement.cpp)| Medium| O(logn)| O(1)|
[Random Pick with Weight](https://leetcode.com/problems/random-pick-with-weight/)| [C++](./Search/RandomPickWeight.cpp)| Medium| O(logn)| O(1)|
[Sqrt(x)](https://leetcode.com/problems/sqrtx/)| [C++](./Search/Sqrtx.cpp)| Medium| O(logn)| O(1)|
[Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)| [C++](./Search/MedianTwoSortedArrays.cpp)| Hard| O(log(m + n))| O(1)|
[Minimize Max Distance to Gas Station](https://leetcode.com/problems/minimize-max-distance-to-gas-station/)| [C++](./Search/MinimizeMaxDistanceGasStation.cpp)| Hard| O(nlogm)| O(1)|
[Rotting Oranges](https://leetcode.com/problems/rotting-oranges/)| [C++](./Search/994.RottingOranges.cpp)| Medium| O(mn)| O(mn)|

## Sort
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)| [C++](./Sort/MergeSortedArray.cpp)| Easy| O(n)| O(1)|
[Sort Colors](https://leetcode.com/problems/sort-colors/)| [C++](./Sort/SortColors.cpp)| Medium| O(n)| O(1)|
[Wiggle Sort](https://leetcode.com/problems/wiggle-sort/)| [C++](./Sort/WiggleSort.cpp)| Medium| O(n)| O(1)|
[Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/)| [C++](./Sort/WiggleSortII.cpp)| Medium| O(nlogn)| O(n)|
[Sort Transformed Array](https://leetcode.com/problems/sort-transformed-array/)| [C++](./Sort/SortTransformedArray.cpp)| Medium| O(n)| O(1)|
[Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)| [C++](./Sort/TopKFrequentElements.cpp)| Medium| O(nlogn)| O(n)|
[Meeting Rooms](https://leetcode.com/problems/meeting-rooms/)| [C++](./Sort/MeetingRooms.cpp)| Easy| O(nlogn)| O(1)|
[Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/)| [C++](./Sort/MeetingRoomsII.cpp)| Medium| O(nlogn)| O(n)|
[Merge Intervals](https://leetcode.com/problems/merge-intervals/)| [C++](./Sort/MergeIntervals.cpp)| Hard| O(nlogn)| O(n)|
[Alien Dictionary](https://leetcode.com/problems/alien-dictionary/)| [C++](./Graph/AlienDictionary.cpp)| Hard| O(nm)| O(nm)|
[Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)| [C++](./Sort/KthLargestElementInArray.cpp)| Medium| O(nlogn)| O(n)|
[Array Partition I](https://leetcode.com/problems/array-partition-i/description/)| [C++](./Sort/ArrayPartitionI.cpp)|Easy| O(nlogn)| O(n)|
[Insert Interval](https://leetcode.com/problems/insert-interval/description/)| [C++](./Sort/InsertInterval.cpp)|Hard| O(n)| O(1)|
[Largest Number](https://leetcode.com/problems/largest-number/)| [C++](./Sort/LargestNumber.cpp)| Medium| O(nlogn)| O(1)|

## Graph
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Number of Connected Components in an Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)| [C++](./Graph/NumberConnectedComponentsUndirectedGraph.cpp)| Medium| O(nlogn)| O(n)|
[Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree/)| [C++](./Graph/GraphValidTree.cpp)| Medium| O(nlogn)| O(n)|
[Number of Islands II](https://leetcode.com/problems/number-of-islands-ii/)| [C++](./Graph/NumberIslandsII.cpp)| Hard| O(klogmn)| O(mn)|
[Course Schedule](https://leetcode.com/problems/course-schedule/)| [C++](./Graph/CourseSchedule.cpp)| Medium| O(n)| O(n)|
[Course Schedule II](https://leetcode.com/problems/course-schedule-ii/)| [C++](./Graph/CourseScheduleII.cpp)| Medium| O(n)| O(n)|

## Design
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Shuffle an Array](https://leetcode.com/problems/shuffle-an-array/)| [C++](./Design/ShuffleAnArray.cpp)| Easy| O(n)| O(1)|
[Design HashMap](https://leetcode.com/problems/design-hashmap/)| [C++](./Design/DesignHashMap.cpp)| Easy| O(n)| O(n)|
[Design Tic-Tac-Toe](https://leetcode.com/problems/design-tic-tac-toe/)| [C++](./Design/DesignTicTacToe.cpp)| Medium| O(1)| O(n)|
[Flatten Nested List Iterator](https://leetcode.com/problems/flatten-nested-list-iterator)| [C++](./Design/FlattenNestedListIterator.cpp)| Medium| O(n)| O(n)|
[Flatten 2D Vector](https://leetcode.com/problems/flatten-2d-vector/)| [C++](./Design/Vector2D.cpp)| Medium | O(n)| O(n)|
[Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)| [C++](./Design/ImplementTrie.cpp)| Medium | O(n)| O(n)|
[Add and Search Word - Data structure design](https://leetcode.com/problems/add-and-search-word-data-structure-design/)| [C++](./Design/AddSearchWord.cpp)| Medium | O(24^n)| O(n)|
[Insert Delete GetRandom O(1)](https://leetcode.com/problems/insert-delete-getrandom-o1/)| [C++](./Design/InsertDeleteGetRandom.cpp)| Medium| O(1)| O(n)|
[LRU Cache](https://leetcode.com/problems/lru-cache/)| [C++](./Design/LRUCache.cpp)| Hard| O(1)| O(n)|
[All O`one Data Structure](https://leetcode.com/problems/all-oone-data-structure/)| [C++](./Design/AllOne.cpp)| Hard| O(1)| O(n)|


## Google
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Plus One](https://leetcode.com/problems/plus-one/)| [C++](./Math/PlusOne.cpp)| Easy| ★★★★★★|
[Number of Islands](https://leetcode.com/problems/number-of-islands/)| [C++](./DFS/NumberofIslands.cpp)| Medium| ★★★★|
[Summary Ranges](https://leetcode.com/problems/summary-ranges/)| [C++](./Array/SummaryRanges.cpp)| Medium| ★★★★|
[Perfect Squares](https://leetcode.com/problems/perfect-squares/)| [C++](./DP/PerfectSquares.cpp)| Medium| ★★★★|
[Merge Intervals](https://leetcode.com/problems/merge-intervals/)| [C++](./Sort/MergeIntervals.cpp)| Hard| ★★★|
[Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)| [C++](./Stack/ValidParentheses.cpp)| Easy| ★★★|
[Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)| [C++](./Math/TrappingRainWater.cpp)| Hard| ★★|
[Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)| [C++](./LinkedList/MergeKSortedLists.cpp)| Hard| ★★|
[Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)| [C++](./Array/LongestConsecutiveSequence.cpp)| Hard| ★★|
[Find Peak Element](https://leetcode.com/problems/find-peak-element/)| [C++](./Search/FindPeakElement.cpp)| Medium| ★★|
[Power of Two](https://leetcode.com/problems/power-of-two/)| [C++](./Math/PowerTwo.cpp)| Easy| ★★|
[Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)| [C++](./Array/SpiralMatrix.cpp)| Medium| ★★|
[Sliding Window Maximum ](https://leetcode.com/problems/sliding-window-maximum/)| [C++](./Array/SlidingWindowMaximum.cpp)| Hard| ★★|
[Pow(x, n)](https://leetcode.com/problems/isomorphic-strings/)| [C++](./Math/Pow.cpp)| Medium| ★★|
[Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)| [C++](./DFS/LetterCombinationsPhoneNumber.cpp)| Medium| ★★|
[Heaters](https://leetcode.com/problems/heaters/)| [C++](./Array/Heaters.cpp)| Easy| ★|

## Facebook
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[3Sum](https://leetcode.com/problems/3sum/)| [C++](./Array/ThreeSum.cpp)| Medium| ★★★★★★|
[Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)| [C++](./String/ValidPalindrome.cpp)| Easy| ★★★★★★|
[Valid Palindrome II](https://leetcode.com/problems/valid-palindrome-ii/)| [C++](./String/ValidPalindromeII.cpp)| Easy| ★★★★★★|
[Move Zeroes](https://leetcode.com/problems/move-zeroes/)| [C++](./Array/MoveZeroes.cpp)| Easy| ★★★★★★|
[Remove Invalid Parentheses](https://leetcode.com/problems/remove-invalid-parentheses/)| [C++](./DFS/RemoveInvalidParentheses.cpp)| Hard| ★★★★★★|
[Add Binary](https://leetcode.com/problems/add-binary/)| [C++](./Math/AddBinary.cpp)| Easy| ★★★★★|
[Two Sum](https://leetcode.com/problems/two-sum/)| [C++](./Array/TwoSum.cpp)| Easy| ★★★★★|
[Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/)| [C++](./Tree/BinaryTreePaths.cpp)| Easy| ★★★★|
[Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)| [C++](./DFS/LetterCombinationsPhoneNumber.cpp)| Medium| ★★★★|
[Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)| [C++](./LinkedList/MergeKSortedLists.cpp)| Hard| ★★★★|
[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)| [C++](./LinkedList/ReverseLinkedList.cpp)| Easy| ★★★|
[Merge Intervals](https://leetcode.com/problems/merge-intervals/)| [C++](./Sort/MergeIntervals.cpp)| Hard| ★★★|
[Number of Islands](https://leetcode.com/problems/number-of-islands/)| [C++](./DFS/NumberofIslands.cpp)| Medium| ★★★|
[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)| [C++](./LinkedList/ReverseLinkedList.cpp)| Easy| ★★★|
[Expression Add Operators](https://leetcode.com/problems/expression-add-operators/)| [C++](./DFS/ExpressionAddOperators.cpp)| Hard| ★★★|
[Subsets](https://leetcode.com/problems/subsets/)| [C++](./DFS/Subsets.cpp)| Medium| ★★★|
[Sort Colors](https://leetcode.com/problems/sort-colors/)| [C++](./Sort/SortColors.cpp)| Medium| ★★|

## Snapchat
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Game of Life](https://leetcode.com/problems/game-of-life/)	|	[C++](./Array/GameLife.cpp)| Medium| ★★★★★★|
[Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/)| [C++](./Sort/MeetingRoomsII.cpp)| Medium| ★★★★★★|
[Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)| [C++](./Array/ValidSudoku.cpp)| Easy| ★★★★★|
[Binary Tree Vertical Order Traversal](https://leetcode.com/problems/binary-tree-vertical-order-traversal/)| [C++](./Tree/BinaryTreeVerticalOrderTraversal.cpp)| Medium| ★★★★|
[Alien Dictionary](https://leetcode.com/problems/alien-dictionary/)| [C++](./Graph/AlienDictionary.cpp)| Hard| ★★★★|
[One Edit Distance](https://leetcode.com/problems/one-edit-distance/)| [C++](./String/OneEditDistance.cpp)| Medium| ★★★|
[Sudoku Solver](https://leetcode.com/problems/sudoku-solver/)| [C++](./Math/SudokuSolver.cpp)| Hard| ★★★|
[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)| [C++](./LinkedList/ReverseLinkedList.cpp)| Easy| ★★|
[Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/)| [C++](./Tree/UniqueBinarySearchTrees.cpp)| Medium| ★★|
[Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)| [C++](./String/MinimumWindowSubstring.cpp)| Hard| ★★|
[Remove K Digits](https://leetcode.com/problems/remove-k-digits/)| [C++](./Stack/RemoveKDigits.cpp)| Medium| ★|
[Ternary Expression Parser](https://leetcode.com/problems/ternary-expression-parser/)| [C++](./Stack/TernaryExpressionParser.cpp)| Medium| ★|

## Uber
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)| [C++](./Array/ValidSudoku.cpp)| Easy| ★★★★|
[Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)| [C++](./Array/SpiralMatrix.cpp)| Medium| ★★★★|
[Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)| [C++](./DFS/LetterCombinationsPhoneNumber.cpp)| Medium| ★★★★|
[Group Anagrams](https://leetcode.com/problems/anagrams/)| [C++](./String/GroupAnagrams.cpp)| Medium| ★★★★|
[Word Pattern](https://leetcode.com/problems/word-pattern/)| [C++](./String/WordPattern.cpp)| Easy| ★★★|
[Roman to Integer](https://leetcode.com/problems/roman-to-integer/)| [C++](./Math/RomanToInteger.cpp)| Easy| ★★★|
[Combination Sum](https://leetcode.com/problems/combination-sum/)| [C++](./DFS/CombinationSum.cpp)| Medium| ★★|

## Airbnb
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Two Sum](https://leetcode.com/problems/two-sum/)| [C++](./Array/TwoSum.cpp)| Easy| ★★★★★|
[Text Justification](https://leetcode.com/problems/text-justification/)| [C++](./String/TextJustification.cpp)| Hard| ★★★★|
[House Robber](https://leetcode.com/problems/house-robber/)| [C++](./DP/HouseRobber.cpp)| Easy| ★★|
[Single Number](https://leetcode.com/problems/single-number/)| [C++](./Math/SingleNumber.cpp)| Medium| ★★|
[Word Search II](https://leetcode.com/problems/word-search-ii/)| [C++](./DFS/WordSearchII.cpp)| Hard| ★★|
[Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)| [C++](./Math/AddTwoNumbers.cpp)| Medium| ★★|

## LinkedIn
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)| [C++](./DP/MaximumSubarray.cpp)| Medium| ★★★★★★|
[Pow(x, n)](https://leetcode.com/problems/isomorphic-strings/)| [C++](./Math/Pow.cpp)| Medium| ★★★★★★|
[Merge Intervals](https://leetcode.com/problems/merge-intervals/)| [C++](./Sort/MergeIntervals.cpp)| Hard| ★★★★★★|
[Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/)| [C++](./String/IsomorphicStrings.cpp)| Easy| ★★★★★★|
[Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)| [C++](./Search/SearchInRotatedSortedArray.cpp)| Hard| ★★★★★|
[Search for a Range](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)| [C++](./Search/SearchForARange.cpp)| Medium| ★★★★★|
[Two Sum](https://leetcode.com/problems/two-sum/)| [C++](./Array/TwoSum.cpp)| Easy| ★★★★|
[Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)| [C++](./Tree/102.BinaryTreeLevelOrderTraversal.cpp)| Easy| ★★★★|
[Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)| [C++](./Stack/EvaluateReversePolishNotation.cpp)| Medium| ★★★|
[Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)| [C++](./DP/MaximumProductSubarray.cpp)| Medium| ★★★|
[Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)| [C++](./Array/ProductExceptSelf.cpp)| Medium| ★★★|
[Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)| [C++](./Tree/SymmetricTree.cpp)| Easy| ★★|

## Amazon
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Two Sum](https://leetcode.com/problems/two-sum/)| [C++](./Array/TwoSum.cpp)| Easy| ★★★★★★|
[Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/)| [C++](./DP/MinCostClimbingStairs.cpp)| Easy| ★★★★|
[Number of Islands](https://leetcode.com/problems/number-of-islands/)| [C++](./DFS/NumberofIslands.cpp)| Medium| ★★|
[Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)| [C++](./Math/AddTwoNumbers.cpp)| Medium| ★★|
[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)| [C++](./LinkedList/ReverseLinkedList.cpp)| Easy| ★★|
[Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)| [C++](./Stack/ValidParentheses.cpp)| Easy| ★★|
[Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)| [C++](./DP/LongestPalindromicSubstring.cpp)| Medium| ★★|
[Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)| [C++](./Math/TrappingRainWater.cpp)| Hard| ★★|
[Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)| [C++](./String/LongestSubstringWithoutRepeatingCharacters.cpp)| Medium| ★★|
[Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)| [C++](./DFS/LetterCombinationsPhoneNumber.cpp)| Medium| ★★|
[Valid Anagram](https://leetcode.com/problems/valid-anagram/)| [C++](./String/ValidAnagram.cpp)| Easy| ★★|
[Rotate Image](https://leetcode.com/problems/rotate-image/)| [C++](./Array/RotateImage.cpp)| Medium| ★★|
[Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)| [C++](./DP/BestTimeBuySellStock.cpp)| Easy| ★★|
[3Sum](https://leetcode.com/problems/3sum/)| [C++](./Array/ThreeSum.cpp)| Medium| ★★|
[Sliding Window Maximum ](https://leetcode.com/problems/sliding-window-maximum/)| [C++](./Array/SlidingWindowMaximum.cpp)| Hard| ★★|

## Microsoft
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)| [C++](./LinkedList/ReverseLinkedList.cpp)| Easy| ★★★★★★|
[Two Sum](https://leetcode.com/problems/two-sum/)| [C++](./Array/TwoSum.cpp)| Easy| ★★★★★|
[String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/)| [C++](./Math/Atoi.cpp)| Easy| ★★★★|
[Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)| [C++](./Math/AddTwoNumbers.cpp)| Medium| ★★★★|
[Excel Sheet Column Number](https://leetcode.com/problems/excel-sheet-column-number/)| [C++](./Math/ExcelSheetColumnNumber.cpp)| Easy| ★★★★|
[Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)| [C++](./Tree/ValidateBinarySearchTree.cpp)| Medium| ★★★|
[Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)| [C++](./LinkedList/MergeTwoSortedLists.cpp)| Easy| ★★★|



## Problem Status
| Solution | Number | Title | Difficulty |
| -------- | ------ | ----- | ---------- |
| [C++](./LinkedList/LFUCache.cpp)	|	460	|	[LFU Cache](https://oj.leetcode.com/problems/lfu-cache/)	| Hard	|
| [C++](./Array/FindDisappearedNumbers.cpp)| 448| [Find All Numbers Disappeared in an Array](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/)| Easy|
| [C++](./DFS/CombinationSumIV.cpp)	|	377	|	[Combination Sum IV](https://leetcode.com/problems/combination-sum-iv/)	|	Medium
|		|	376	|	[Wiggle Subsequence](https://leetcode.com/problems/wiggle-subsequence/)	|	Medium
|	[C++](./DP/GuessNumberHigherOrLowerII.cpp)	|	375	|	[Guess Number Higher or Lower II](https://leetcode.com/problems/guess-number-higher-or-lower-ii/)	|	Medium
|		|	374	|	[Guess Number Higher or Lower](https://leetcode.com/problems/guess-number-higher-or-lower/)	| Easy
|		|	373	|	[Find K Pairs with Smallest Sums](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/)	|	Medium
|	[C++](./Math/SuperPow.cpp)	|	372	|	[Super Pow](https://leetcode.com/problems/super-pow/)	|	Medium
|	[C++](./Math/SumTwoIntegers.cpp)	|	371	|	[Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/)	| Easy
|		|	370	|	[Range Addition](https://leetcode.com/problems/range-addition/) &hearts;	|	Medium
|		|	369	|	[Plus One Linked List](https://leetcode.com/problems/plus-one-linked-list/) &hearts;	|	Medium
|		|	368	|	[Largest Divisible Subset](https://leetcode.com/problems/largest-divisible-subset/)	|	Medium
|		|	367	|	[Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/)	|	Medium
|		|	366	|	[Find Leaves of Binary Tree](https://leetcode.com/problems/find-leaves-of-binary-tree/) &hearts;	|	Medium
|		|	365	|	[Water and Jug Problem](https://leetcode.com/problems/water-and-jug-problem/)	|	Medium
| [C++](./DP/NestedListWeightSumII.cpp)		|	364	|	[Nested List Weight Sum II](https://leetcode.com/problems/nested-list-weight-sum-ii/) &hearts;	|	Medium
|		|	363	|	[Max Sum of Rectangle No Larger Than K](https://leetcode.com/problems/max-sum-of-sub-matrix-no-larger-than-k/)	|	Hard
|		|	362	|	[Design Hit Counter](https://leetcode.com/problems/design-hit-counter/) &hearts;	|	Medium
|		|	361	|	[Bomb Enemy](https://leetcode.com/problems/bomb-enemy/) &hearts;	|	Medium
| [C++](./Sort/SortTransformedArray.cpp)	|	360	|	[Sort Transformed Array](https://leetcode.com/problems/sort-transformed-array/) &hearts;	|	Medium
|		|	359	|	[Logger Rate Limiter](https://leetcode.com/problems/logger-rate-limiter/) &hearts;	| Easy
|		|	358	|	[Rearrange String k Distance Apart](https://leetcode.com/problems/rearrange-string-k-distance-apart/) &hearts;	|	Hard
|		|	357	|	[Count Numbers with Unique Digits](https://leetcode.com/problems/count-numbers-with-unique-digits/)	|	Medium
|		|	356	|	[Line Reflection](https://leetcode.com/problems/line-reflection/) &hearts;	|	Medium
|		|	355	|	[Design Twitter](https://leetcode.com/problems/design-twitter/)	|	Medium
|		|	354	|	[Russian Doll Envelopes](https://leetcode.com/problems/russian-doll-envelopes/)	|	Hard
|		|	353	|	[Design Snake Game](https://leetcode.com/problems/design-snake-game/) &hearts;	|	Medium
|		|	352	|	[Data Stream as Disjoint Intervals](https://leetcode.com/problems/data-stream-as-disjoint-intervals/)	|	Hard
|		|	351	|	[Android Unlock Patterns](https://leetcode.com/problems/android-unlock-patterns/) &hearts;	|	Medium
|	[C++](./Array/IntersectionTwoArraysII.cpp)	|	350	|	[Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/)	| Easy
|	[C++](./Array/IntersectionTwoArrays.cpp)	|	349	|	[Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/)	| Easy
|		|	348	|	[Design Tic-Tac-Toe](https://leetcode.com/problems/design-tic-tac-toe/) &hearts;	|	Medium
|	[C++](./Sort/TopKFrequentElements.cpp)	|	347	|	[Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)	|	Medium
|		|	346	|	[Moving Average from Data Stream](https://leetcode.com/problems/moving-average-from-data-stream/) &hearts;	| Easy
|	[C++](./String/ReverseVowelsOfAString.cpp)	|	345	|	[Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string/)	| Easy
|	[C++](./String/ReverseString.cpp)	|	344	|	[Reverse String](https://leetcode.com/problems/reverse-string/)	| Easy
|	[C++](./Math/IntegerBreak.cpp)	|	343	|	[Integer Break](https://leetcode.com/problems/integer-break/)	|	Medium
|		|	342	|	[Power of Four](https://leetcode.com/problems/power-of-four/)	| Easy
|	[C++](./Design/FlattenNestedListIterator.cpp)	|	341	|	[Flatten Nested List Iterator](https://leetcode.com/problems/flatten-nested-list-iterator/)	|	Medium
|	[C++](./String/LongestSubstringMostKDistinctCharacters.cpp)	|	340	|	[Longest Substring with At Most K Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/)  &hearts;	|	Hard
|	[C++](./DP/NestedListWeightSum.cpp)	|	339	|	[Nested List Weight Sum](https://leetcode.com/problems/nested-list-weight-sum/)  &hearts;	| Easy
|	[C++](./Math/CountingBits.cpp)	|	338	|	[Counting Bits](https://leetcode.com/problems/counting-bits/)	|	Medium
|	[C++](./Tree/HouseRobberIII.cpp)	|	337	|	[House Robber III](https://leetcode.com/problems/house-robber-iii/)	|	Medium
|		|	336	|	[Palindrome Pairs](https://leetcode.com/problems/palindrome-pairs/)	|	Hard
|		|	335	|	[Self Crossing](https://leetcode.com/problems/self-crossing/)	|	Hard
|	[C++](./Tree/IncreasingTripletSubsequence.cpp)	|	334	|	[Increasing Triplet Subsequence](https://leetcode.com/problems/increasing-triplet-subsequence/)	|	Medium
|		|	333	|	[Largest BST Subtree](https://leetcode.com/problems/largest-bst-subtree/)  &hearts;	|	Medium
|		|	332	|	[Reconstruct Itinerary](https://leetcode.com/problems/reconstruct-itinerary/)	|	Medium
|		|	331	|	[Verify Preorder Serialization of a Binary Tree](https://leetcode.com/problems/verify-preorder-serialization-of-a-binary-tree/)	|	Medium
|		|	330	|	[Patching Array](https://leetcode.com/problems/patching-array/)	|	Hard
|		|	329	|	[Longest Increasing Path in a Matrix](https://leetcode.com/problems/longest-increasing-path-in-a-matrix/)	|	Hard
| [C++](./LinkedList/OddEvenLinkedList.cpp)	|	328	|	[Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/)	|	Medium
|		|	327	|	[Count of Range Sum](https://leetcode.com/problems/count-of-range-sum/)	|	Hard
|	[C++](./Math/PowerThree.cpp)	|	326	|	[Power of Three](https://leetcode.com/problems/power-of-three/)	| Easy
|	[C++](./Array/MaximumSizeSubarraySumEqualsK.cpp)	|	325	|	[Maximum Size Subarray Sum Equals k](https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/)  &hearts;	|	Medium
|	[C++](./Sort/WiggleSortII.cpp)	|	324	|	[Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/)	|	Medium
|	[C++](./Sort/NumberConnectedComponentsUndirectedGraph.cpp)	|	323	|	[Number of Connected Components in an Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)  &hearts;	|	Medium
|	[C++](./DP/CoinChange.cpp)	|	322	|	[Coin Change](https://leetcode.com/problems/coin-change/)	|	Medium
|	[C++](./Array/CreateMaximumNumber.cpp)	|	321	|	[Create Maximum Number](https://leetcode.com/problems/create-maximum-number/)	|	Hard
|	[C++](./DFS/GeneralizedAbbreviation.cpp) |	320	|	[Generalized Abbreviation](https://leetcode.com/problems/generalized-abbreviation/)  &hearts;	|	Medium
|		|	319	|	[Bulb Switcher](https://leetcode.com/problems/bulb-switcher/)	|	Medium
|		|	318	|	[Maximum Product of Word Lengths](https://leetcode.com/problems/maximum-product-of-word-lengths/)	|	Medium
|	[C++](./BFS/ShortestDistanceAllBuildings.cpp)	|	317	|	[Shortest Distance from All Buildings](https://leetcode.com/problems/shortest-distance-from-all-buildings/)  &hearts;	|	Hard
|		|	316	|	[Remove Duplicate Letters](https://leetcode.com/problems/remove-duplicate-letters/)	|	Hard
|		|	315	|	[Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/)	|	Hard
|	[C++](./Tree/BinaryTreeVerticalOrderTraversal.cpp)	|	314	|	[Binary Tree Vertical Order Traversal](https://leetcode.com/problems/binary-tree-vertical-order-traversal/) &hearts;	|	Medium
|	[C++](./Math/SuperUglyNumber.cpp)	|	313	|	[Super Ugly Number](https://leetcode.com/problems/super-ugly-number/)	|	Medium
|	[C++](./DP/GuessNumberHigherOrLowerII.cpp)	|	312	|	[Burst Balloons](https://leetcode.com/problems/burst-balloons/)	|	Hard
|	[C++](./Math/SparseMatrixMultiplication.cpp)	|	311	|	[Sparse Matrix Multiplication](https://leetcode.com/problems/sparse-matrix-multiplication/)  &hearts;	|	Medium
|		|	310	|	[Minimum Height Trees](https://leetcode.com/problems/minimum-height-trees/)	|	Medium
|	[C++](./DP/BestTimeBuySellStockCooldown.cpp)	|	309	|	[Best Time to Buy and Sell Stock with Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/)	|	Medium
|		|	308	|	[Range Sum Query 2D - Mutable](https://leetcode.com/problems/range-sum-query-2d-mutable/) &hearts;	|	Hard
|		|	307	|	[Range Sum Query - Mutable](https://leetcode.com/problems/range-sum-query-mutable/)	|	Medium
|		|	306	|	[Additive Number](https://leetcode.com/problems/additive-number/)	|	Medium
|	[C++](./Graph/NumberIslandsII.cpp)	|	305	|	[Number of Islands II](https://leetcode.com/problems/number-of-islands-ii/)  &hearts;	|	Hard
|	[C++](./Array/NumMatrix.cpp)	|	304	|	[Range Sum Query 2D - Immutable](https://leetcode.com/problems/range-sum-query-2d-immutable/)	|	Medium
|		|	303	|	[Range Sum Query - Immutable](https://leetcode.com/problems/range-sum-query-immutable/)	| Easy
|		|	302	|	[Smallest Rectangle Enclosing Black Pixels](https://leetcode.com/problems/smallest-rectangle-enclosing-black-pixels/)  &hearts;	|	Hard
|	[C++](./DFS/RemoveInvalidParentheses.cpp)	|	301	|	[Remove Invalid Parentheses](https://leetcode.com/problems/remove-invalid-parentheses/)	|	Hard
|	[C++](./DP/LongestIncreasingSubsequence.cpp)	|	300	|	[Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)	|	Medium
|		|	299	|	[Bulls and Cows](https://leetcode.com/problems/bulls-and-cows/)	| Easy	|
|		|	298	|	[Binary Tree Longest Consecutive Sequence](https://leetcode.com/problems/binary-tree-longest-consecutive-sequence/) &hearts;	|	Medium	|
|		|	297	|	[Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)	|	Hard	|
|	[C++](./Tree/UniqueBinarySearchTrees.cpp)	|	296	|	[Best Meeting Point](https://leetcode.com/problems/best-meeting-point/) &hearts;	|	Hard	|
|		|	295	|	[Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/)	|	Hard	|
|	[C++](./DP/FlipGameII.cpp)	|	294	|	[Flip Game II](https://leetcode.com/problems/flip-game-ii/) &hearts;	|	Medium	|
|	[C++](./String/FlipGame.cpp)	|	293	|	[Flip Game](https://leetcode.com/problems/flip-game/) &hearts;	| Easy	|
|		|	292	|	[Nim Game](https://leetcode.com/problems/nim-game/)	| Easy	|
|		|	291	|	[Word Pattern II](https://leetcode.com/problems/word-pattern-ii/) &hearts;	|	Hard	|
|	[C++](./String/WordPattern.cpp)	|	290	|	[Word Pattern](https://leetcode.com/problems/word-pattern/)	| Easy	|
|	[C++](./Array/GameLife.cpp)	|	289	|	[Game of Life](https://leetcode.com/problems/game-of-life/)	|	Medium	|
|		|	288	|	[Unique Word Abbreviation](https://leetcode.com/problems/unique-word-abbreviation/) &hearts;	| Easy	|
|		|	287	|	[Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)	|	Hard	|
|	[C++](./DFS/NumberofIslands.cpp)	|	286	|	[Walls and Gates](https://leetcode.com/problems/walls-and-gates/) &hearts;	|	Medium	|
|		|	285	|	[Inorder Successor in BST](https://leetcode.com/problems/inorder-successor-in-bst/) &hearts;	|	Medium	|
|		|	284	|	[Peeking Iterator](https://leetcode.com/problems/peeking-iterator/)	|	Medium	|
|	[C++](./Array/MoveZeroes.cpp)	|	283	|	[Move Zeroes](https://leetcode.com/problems/move-zeroes/)	| Easy	|
|	[C++](./DFS/ExpressionAddOperators.cpp)	|	282	|	[Expression Add Operators](https://leetcode.com/problems/expression-add-operators/)	|	Hard	|
|		|	281	|	[Zigzag Iterator](https://leetcode.com/problems/zigzag-iterator/) &hearts;	|	Medium	|
|	[C++](./Sort/WiggleSort.cpp)	|	280	|	[Wiggle Sort](https://leetcode.com/problems/wiggle-sort/) &hearts;	|	Medium	|
|	[C++](./DP/PerfectSquares.cpp)	|	279	|	[Perfect Squares](https://leetcode.com/problems/perfect-squares/)	|	Medium	|
|		|	278	|	[First Bad Version](https://leetcode.com/problems/first-bad-version/)	| Easy	|
|		|	277	|	[Find the Celebrity](https://leetcode.com/problems/find-the-celebrity/) &hearts;	|	Medium	|
|	[C++](./DP/PaintFence.cpp)	|	276	|	[Paint Fence](https://leetcode.com/problems/paint-fence/) &hearts;	| Easy	|
|		|	275	|	[H-Index II](https://leetcode.com/problems/h-index-ii/)	|	Medium	|
|		|	274	|	[H-Index](https://leetcode.com/problems/h-index/)	|	Medium	|
|	[C++](./Math/IntegerEnglishWords.cpp)	|	273	|	[Integer to English Words](https://leetcode.com/problems/integer-to-english-words/)	|	Hard	|
|	[C++](./Search/ClosestBinarySearchTreeValueII.cpp)	|	272	|	[Closest Binary Search Tree Value II](https://leetcode.com/problems/closest-binary-search-tree-value-ii/) &hearts;	|	Hard	|
|		|	271	|	[Encode and Decode Strings](https://leetcode.com/problems/encode-and-decode-strings/) &hearts;	|	Medium	|
|	[C++](./Search/ClosestBinarySearchTreeValue.cpp)	|	270	|	[Closest Binary Search Tree Value](https://leetcode.com/problems/closest-binary-search-tree-value/) &hearts;	| Easy	|
|	[C++](./Graph/AlienDictionary.cpp)	|	269	|	[Alien Dictionary](https://leetcode.com/problems/alien-dictionary/) &hearts;	|	Hard	|
|	[C++](./Math/MissingNumber.cpp)	|	268	|	[Missing Number](https://leetcode.com/problems/missing-number/)	|	Easy	|
|		|	267	|	[Palindrome Permutation II](https://leetcode.com/problems/palindrome-permutation-ii/) &hearts;	|	Medium	|
|	[C++](./String/PalindromePermutation.cpp)	|	266	|	[Palindrome Permutation](https://leetcode.com/problems/palindrome-permutation/) &hearts;	| Easy	|
|	[C++](./DP/PaintHouseII.cpp)	|	265	|	[Paint House II](https://leetcode.com/problems/paint-house-ii/) &hearts;	|	Hard	|
|	[C++](./Math/UglyNumberII.cpp)	|	264	|	[Ugly Number II](https://leetcode.com/problems/ugly-number-ii/)	|	Medium	|
|	[C++](./Math/UglyNumber.cpp)	|	263	|	[Ugly Number](https://leetcode.com/problems/ugly-number/)	| Easy	|
|	[C++](./Sort/GraphValidTree.cpp)	|	261	|	[Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree/) &hearts;	|	Medium	|
|		|	260	|	[Single Number III](https://leetcode.com/problems/single-number-iii/)	|	Medium	|
|		|	259	|	[3Sum Smaller](https://leetcode.com/problems/3sum-smaller/) &hearts;	|	Medium	|
|	[C++](./Math/AddDigits.cpp)	|	258	|	[Add Digits](https://leetcode.com/problems/add-digits/)	| Easy	|
|	[C++](./Tree/BinaryTreePaths.cpp)	|	257	|	[Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/)	| Easy	|
|	[C++](./DP/PaintHouse.cpp)	|	256	|	[Paint House](https://leetcode.com/problems/paint-house/) &hearts;	|	Medium	|
|		|	255	|	[Verify Preorder Sequence in Binary Search Tree](https://leetcode.com/problems/verify-preorder-sequence-in-binary-search-tree/) &hearts;	|	Medium	|
|	[C++](./DFS/FactorCombinations.cpp)	|	254	|	[Factor Combinations](https://leetcode.com/problems/factor-combinations/) &hearts;	|	Medium	|
|	[C++](./Sort/MeetingRoomsII.cpp)	|	253	|	[Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/) &hearts;	|	Medium	|
|	[C++](./Sort/MeetingRooms.cpp)	|	252	|	[Meeting Rooms](https://leetcode.com/problems/meeting-rooms/) &hearts;	| Easy	|
|	[C++](./Design/Vector2D.cpp)	|	251	|	[Flatten 2D Vector](https://leetcode.com/problems/flatten-2d-vector/) &hearts;	|	Medium	|
|		|	250	|	[Count Univalue Subtrees](https://leetcode.com/problems/count-univalue-subtrees/) &hearts;	|	Medium	|
|		|	249	|	[Group Shifted Strings](https://leetcode.com/problems/group-shifted-strings/) &hearts;	| Easy	|
|		|	248	|	[Strobogrammatic Number III](https://leetcode.com/problems/strobogrammatic-number-iii/) &hearts;	|	Hard	|
|	[C++](./DFS/StrobogrammaticNumberII.cpp)	|	247	|	[Strobogrammatic Number II](https://leetcode.com/problems/strobogrammatic-number-ii/) &hearts;	|	Medium	|
|	[C++](./Array/StrobogrammaticNumber.cpp)	|	246	|	[Strobogrammatic Number](https://leetcode.com/problems/strobogrammatic-number/) &hearts;	| Easy	|
|	[C++](./Array/ShortestWordDistanceIII.cpp)	|	245	|	[Shortest Word Distance III](https://leetcode.com/problems/shortest-word-distance-iii/) &hearts;	|	Medium	|
|	[C++](./String/ShortestWordDistanceII.cpp)	|	244	|	[Shortest Word Distance II](https://leetcode.com/problems/shortest-word-distance-ii/) &hearts;	|	Medium	|
| [C++](./String/ShortestWordDistance.cpp)	|	243	|	[Shortest Word Distance](https://leetcode.com/problems/shortest-word-distance/) &hearts;	| Easy	|
|	[C++](./String/ValidAnagram.cpp)	|	242	|	[Valid Anagram](https://leetcode.com/problems/valid-anagram/)	| Easy	|
|	[C++](./DP/DifferentWaysAddParentheses.cpp)	|	241	|	[Different Ways to Add Parentheses](https://leetcode.com/problems/different-ways-to-add-parentheses/)	|	Medium	|
|	[C++](./Search/Search2DMatrixII.cpp) 	|	240	|	[Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/)	|	Medium	|
|	[C++](./Array/SlidingWindowMaximum.cpp)	|	239	|	[Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)	|	Hard	|
|	[C++](./Array/ProductExceptSelf.cpp)	|	238	|	[Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)	|	Medium	|
|		|	237	|	[Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/)	| Easy	|
|		|	236	|	[Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)	|	Medium	|
|	[C++](./Tree/LowestCommonAncestorBinarySearchTree.cpp)	|	235	|	[Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)	| Easy	|
|	[C++](./LinkedList/PalindromeLinkedList.cpp)	|	234	|	[Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)	| Easy	|
|		|	233	|	[Number of Digit One](https://leetcode.com/problems/number-of-digit-one/)	|	Hard	|
|	[C++](./Queue/ImplementQueueUsingStacks.cpp)	|	232	|	[Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)	| Easy	|
|	[C++](./Math/PowerTwo.cpp)	|	231	|	[Power of Two](https://leetcode.com/problems/power-of-two/)	| Easy	|
|	[C++](./Tree/KthSmallestElementBST.cpp)	|	230	|	[Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)	|	Medium	|
|	[C++](./Array/MajorityElementII.cpp)	|	229	|	[Majority Element II](https://leetcode.com/problems/majority-element-ii/)	|	Medium	|
|	[C++](./Array/SummaryRanges.cpp)	|	228	|	[Summary Ranges](https://leetcode.com/problems/summary-ranges/)	|	Medium	|
|		|	227	|	[Basic Calculator II](https://leetcode.com/problems/basic-calculator-ii/)	|	Medium	|
|	[C++](./Tree/InvertBinaryTree.cpp)	|	226	|	[Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)	| Easy	|
|		|	225	|	[Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/)	| Easy	|
|	[C++](./Stack/BasicCalculator.cpp)	|	224	|	[Basic Calculator](https://leetcode.com/problems/basic-calculator/)	|	Hard	|
|	[C++](./Math/RectangleArea.cpp)	|	223	|	[Rectangle Area](https://leetcode.com/problems/rectangle-area/)	| Easy	|
|		|	222	|	[Count Complete Tree Nodes](https://leetcode.com/problems/count-complete-tree-nodes/)	|	Medium	|
|	[C++](./DP/MaximalSquare.cpp)	|	221	|	[Maximal Square](https://leetcode.com/problems/maximal-square/)	|	Medium	|
|		|	220	|	[Contains Duplicate III](https://leetcode.com/problems/contains-duplicate-iii/)	|	Medium	|
|	[C++](./Array/ContainsDuplicateII.cpp)	|	219	|	[Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/)	| Easy	|
|		|	218	|	[The Skyline Problem](https://leetcode.com/problems/the-skyline-problem/)	|	Hard	|
|	[C++](./Array/ContainsDuplicate.cpp)	|	217	|	[Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)	| Easy	|
|	[C++](./DFS/combinationSumIII.cpp)	|	216	|	[Combination Sum III](https://leetcode.com/problems/combination-sum-iii/)	|	Medium	|
|	[C++](./Sort/KthLargestElementInArray.cpp)	|	215	|	[Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)	|	Medium	|
|		|	214	|	[Shortest Palindrome](https://leetcode.com/problems/shortest-palindrome/)	|	Hard	|
|	[C++](./DP/HouseRobberII.cpp)	|	213	|	[House Robber II](https://leetcode.com/problems/house-robber-ii/)	|	Medium	|
| [C++](./DFS/WordSearchII.cpp)	|	212	|	[Word Search II](https://leetcode.com/problems/word-search-ii/)	|	Hard	|
|	[C++](./DFS/WordDictionary.cpp)	|	211	|	[Add and Search Word - Data structure design](https://leetcode.com/problems/add-and-search-word-data-structure-design/)	|	Medium	|
|	[C++](./Graph/CourseScheduleII.cpp)	|	210	|	[Course Schedule II](https://leetcode.com/problems/course-schedule-ii/)	|	Medium	|
|	[C++](./Array/MinimumSizeSubarraySum.cpp)	|	209	|	[Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)	|	Medium	|
|	[C++](./Design/ImplementTrie.cpp)	|	208	|	[Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)	|	Medium	|
|	[C++](./Graph/CourseSchedule.cpp)	|	207	|	[Course Schedule](https://leetcode.com/problems/course-schedule/)	|	Medium	|
|	[C++](./LinkedList/ReverseLinkedList.cpp)	|	206	|	[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)	| Easy	|
|	[C++](./String/IsomorphicStrings.cpp)	|	205	|	[Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/)	| Easy	|
|	[C++](./Math/CountPrimes.cpp)	|	204	|	[Count Primes](https://leetcode.com/problems/count-primes/)	| Easy	|
|	[C++](./LinkedList/RemoveLinkedListElements.cpp)	|	203	|	[Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)	| Easy	|
|	[C++](./Math/HappyNumber.cpp)	|	202	|	[Happy Number](https://leetcode.com/problems/happy-number/)	| Easy	|
|		|	201	|	[Bitwise AND of Numbers Range](https://leetcode.com/problems/bitwise-and-of-numbers-range/)	|	Medium	|
|	[C++](./DFS/NumberofIslands.cpp)	|	200	|	[Number of Islands](https://leetcode.com/problems/number-of-islands/)	|	Medium	|
| [C++](./Tree/BinaryTreeRightSideView.cpp)	|	199	|	[Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)	| Medium	|
|	[C++](./DP/HouseRobber.cpp)	|	198	|	[House Robber](https://leetcode.com/problems/house-robber/)	| Easy	|
|		|	191	|	[Number of 1 Bits](https://oj.leetcode.com/problems/number-of-1-bits/)	| Easy	|
|		|	190	|	[Reverse Bits](https://oj.leetcode.com/problems/reverse-bits/)	| Easy	|
|	[C++](./Array/RotateArray.cpp)	|	189	|	[Rotate Array](https://oj.leetcode.com/problems/rotate-array/)	| Easy	|
|	[C++](./DP/BestTimeBuySellStockIV.cpp)	|	188	|	[Best Time to Buy and Sell Stock IV](https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/)	| Hard	|
|		|	187	|	[Repeated DNA Sequences](https://oj.leetcode.com/problems/repeated-dna-sequences/)	| Medium	|
|	[C++](./String/ReverseWordsStringII.cpp)	|	186	|	[Reverse Words in a String II](https://oj.leetcode.com/problems/reverse-words-in-a-string-ii/) &hearts;	| Medium	|
|	[C++]((./Sort/LargestNumber.cpp))	|	179	|	[Largest Number](https://oj.leetcode.com/problems/largest-number/)	| Medium	|
|		|	174	|	[Dungeon Game](https://oj.leetcode.com/problems/dungeon-game/)	| Hard	|
|	[C++](./Stack/BinarySearchTreeIterator.cpp)	|	173	|	[Binary Search Tree Iterator](https://oj.leetcode.com/problems/binary-search-tree-iterator/)	| Medium	|
|	[C++](./Math/FactorialTrailingZeroes.cpp)	|	172	|	[Factorial Trailing Zeroes](https://oj.leetcode.com/problems/factorial-trailing-zeroes/)	| Easy	|
|	[C++](./Math/ExcelSheetColumnNumber.cpp)	|	171	|	[Excel Sheet Column Number](https://oj.leetcode.com/problems/excel-sheet-column-number/)	| Easy	|
|	[C++](./Array/TwoSumIII.cpp)	|	170	|	[Two Sum III - Data structure design](https://oj.leetcode.com/problems/two-sum-iii-data-structure-design/) &hearts;	| Easy	|
| 	[C++](./Array/MajorityElement.cpp)  |	169	|	[Majority Element](https://oj.leetcode.com/problems/majority-element/)	| Easy	|
|		|	168	|	[Excel Sheet Column Title](https://oj.leetcode.com/problems/excel-sheet-column-title/)	| Easy	|
|	[C++](./Array/TwoSumII.cpp)	|	167	|	[Two Sum II - Input array is sorted](https://oj.leetcode.com/problems/two-sum-ii-input-array-is-sorted/) &hearts;	| Medium	|
|	[C++](./Math/FractionToRecurringDecimal.cpp)	|	166	|	[Fraction to Recurring Decimal](https://oj.leetcode.com/problems/fraction-to-recurring-decimal/)	| Medium	|
|		|	165	|	[Compare Version Numbers](https://oj.leetcode.com/problems/compare-version-numbers/)	| Easy	|
|		|	164	|	[Maximum Gap](https://oj.leetcode.com/problems/maximum-gap/)	| Hard	|
|	[C++](./Array/MissingRanges.cpp)	|	163	|	[Missing Ranges](https://oj.leetcode.com/problems/missing-ranges/) &hearts;	| Medium	|
|	[C++](./Search/FindPeakElement.cpp)	|	162	|	[Find Peak Element](https://oj.leetcode.com/problems/find-peak-element/)	| Medium	|
|	[C++](./String/OneEditDistance.cpp)	|	161	|	[One Edit Distance](https://oj.leetcode.com/problems/one-edit-distance/)&hearts;	| Medium	|
|		|	160	|	[Intersection of Two Linked Lists](https://oj.leetcode.com/problems/intersection-of-two-linked-lists/)	| Easy	|
|	[C++](./String/LongestSubstringMostTwoDistinctCharacters.cpp)	|	159	|	[Longest Substring with At Most Two Distinct Characters](https://oj.leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/) &hearts;	| Hard	|
|		|	158	|	[Read N Characters Given Read4 II - Call multiple times](https://oj.leetcode.com/problems/read-n-characters-given-read4-ii-call-multiple-times/) &hearts;	| Hard	|
|		|	157	|	[Read N Characters Given Read4](https://oj.leetcode.com/problems/read-n-characters-given-read4/) &hearts;	| Easy	|
|	[C++](./Tree/BinaryTreeUpsideDown) |	156	|	[Binary Tree Upside Down](https://oj.leetcode.com/problems/binary-tree-upside-down/) &hearts;	| Medium	|
|	[C++](./Stack/MinStack.cpp)	|	155	|	[Min Stack](https://oj.leetcode.com/problems/min-stack/)	| Easy	|
|	[C++](./Search/FindMinimumRotatedSortedArrayII.cpp)	|	154	|	[Find Minimum in Rotated Sorted Array II](https://oj.leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/)	| Hard	|
|	[C++](./Search/FindMinimumRotatedSortedArray.cpp)	|	153	|	[Find Minimum in Rotated Sorted Array](https://oj.leetcode.com/problems/find-minimum-in-rotated-sorted-array/)	| Medium	|
|	[C++](./DP/MaximumProductSubarray.cpp)	|	152	|	[Maximum Product Subarray](https://oj.leetcode.com/problems/maximum-product-subarray/)	| Medium	|
|	[C++](./String/ReverseWordsString.cpp)	|	151	|	[Reverse Words in a String](https://oj.leetcode.com/problems/reverse-words-in-a-string/)	| Medium	|
|	[C++](./Stack/EvaluateReversePolishNotation.cpp)	|	150	|	[Evaluate Reverse Polish Notation](https://oj.leetcode.com/problems/evaluate-reverse-polish-notation/)	| Medium	|
|		|	149	|	[Max Points on a Line](https://oj.leetcode.com/problems/max-points-on-a-line/)	| Hard	|
|		|	148	|	[Sort List](https://oj.leetcode.com/problems/sort-list/)	| Medium	|
|		|	147	|	[Insertion Sort List](https://oj.leetcode.com/problems/insertion-sort-list/)	| Medium	|
|	[C++](./LinkedList/LRUCache.cpp)	|	146	|	[LRU Cache](https://oj.leetcode.com/problems/lru-cache/)	| Hard	|
|	[C++](./Stack/PostorderTraversal.cpp)	|	145	|	[Binary Tree Postorder Traversal](https://oj.leetcode.com/problems/binary-tree-postorder-traversal/)	| Hard	|
|	[C++](./Stack/PreorderTraversal.cpp)	|	144	|	[Binary Tree Preorder Traversal](https://oj.leetcode.com/problems/binary-tree-preorder-traversal/)	| Medium	|
|	[C++](./LinkedList/ReorderList.cpp)	|	143	|	[Reorder List](https://oj.leetcode.com/problems/reorder-list/)	| Medium	|
|		|	142	|	[Linked List Cycle II](https://oj.leetcode.com/problems/linked-list-cycle-ii/)	| Medium	|
|		|	141	|	[Linked List Cycle](https://oj.leetcode.com/problems/linked-list-cycle/)	| Easy	|
|		|	140	|	[Word Break II](https://oj.leetcode.com/problems/word-break-ii/)	| Hard	|
|		|	139	|	[Word Break](https://oj.leetcode.com/problems/word-break/)	| Medium	|
|		|	138	|	[Copy List with Random Pointer](https://oj.leetcode.com/problems/copy-list-with-random-pointer/)	| Hard	|
|	[C++](./Math/SingleNumberII.cpp)	|	137	|	[Single Number II](https://oj.leetcode.com/problems/single-number-ii/)	| Medium	|
|	[C++](./Math/SingleNumber.cpp)	|	136	|	[Single Number](https://oj.leetcode.com/problems/single-number/)	| Medium	|
|		|	135	|	[Candy](https://oj.leetcode.com/problems/candy/)	| Hard	|
|	[C++](./Array/GasStation.cpp)	|	134	|	[Gas Station](https://oj.leetcode.com/problems/gas-station/)	| Medium	|
|		|	133	|	[Clone Graph](https://oj.leetcode.com/problems/clone-graph/)	| Medium	|
|		|	132	|	[Palindrome Partitioning II](https://oj.leetcode.com/problems/palindrome-partitioning-ii/)	| Hard	|
|	[C++](./DFS/PalindromePartitioning.cpp)	|	131	|	[Palindrome Partitioning](https://oj.leetcode.com/problems/palindrome-partitioning/)	| Medium	|
|		|	130	|	[Surrounded Regions](https://oj.leetcode.com/problems/surrounded-regions/)	| Medium	|
|		|	129	|	[Sum Root to Leaf Numbers](https://oj.leetcode.com/problems/sum-root-to-leaf-numbers/)	| Medium	|
| [C++](./Array/LongestConsecutiveSequence.cpp)	 | 128	|	[Longest Consecutive Sequence](https://oj.leetcode.com/problems/longest-consecutive-sequence/)	| Hard	|
| [C++](./BFS/WordLadder.cpp) |	127	|	[Word Ladder](https://oj.leetcode.com/problems/word-ladder/)	| Medium	|
|		|	126	|	[Word Ladder II](https://oj.leetcode.com/problems/word-ladder-ii/)	| Hard	|
| [C++](./String/ValidPalindrome.cpp)		|	125	|	[Valid Palindrome](https://oj.leetcode.com/problems/valid-palindrome/)	| Easy	|
|	[C++](./Tree/BinaryTreeMaximumPathSum.cpp)	|	124	|	[Binary Tree Maximum Path Sum](https://oj.leetcode.com/problems/binary-tree-maximum-path-sum/)	| Hard	|
|	[C++](./DP/BestTimeBuySellStockIII.cpp)	|	123	|	[Best Time to Buy and Sell Stock III](https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/)	| Hard	|
|	[C++](./DP/BestTimeBuySellStockII.cpp)	|	122	|	[Best Time to Buy and Sell Stock II](https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/)	| Medium	|
|	[C++](./DP/BestTimeBuySellStock.cpp)	|	121	|	[Best Time to Buy and Sell Stock](https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock/)	| Easy	|
|	[C++](./DP/Triangle.cpp)	|	120	|	[Triangle](https://oj.leetcode.com/problems/triangle/)	| Medium	|
|		|	119	|	[Pascal's Triangle II](https://oj.leetcode.com/problems/pascals-triangle-ii/)	| Easy	|
|		|	118	|	[Pascal's Triangle](https://oj.leetcode.com/problems/pascals-triangle/)	| Easy	|
|		|	117	|	[Populating Next Right Pointers in Each Node II](https://oj.leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/)	| Hard	|
|		|	116	|	[Populating Next Right Pointers in Each Node](https://oj.leetcode.com/problems/populating-next-right-pointers-in-each-node/)	| Medium	|
|		|	115	|	[Distinct Subsequences](https://oj.leetcode.com/problems/distinct-subsequences/)	| Hard	|
|	[C++](./Tree/FlattenBinaryTreeLinkedList.cpp)	|	114	|	[Flatten Binary Tree to Linked List](https://oj.leetcode.com/problems/flatten-binary-tree-to-linked-list/)	| Medium	|
|	[C++](./Tree/PathSumII.cpp)	|	113	|	[Path Sum II](https://oj.leetcode.com/problems/path-sum-ii/)	| Medium	|
|	[C++](./Tree/PathSum.cpp)	|	112	|	[Path Sum](https://oj.leetcode.com/problems/path-sum/)	| Easy	|
|	[C++](./Tree/MinimumDepthOfBinaryTree.cpp)	|	111	|	[Minimum Depth of Binary Tree](https://oj.leetcode.com/problems/minimum-depth-of-binary-tree/)	| Easy	|
|	[C++](./Tree/BalancedBinaryTree.cpp)	|	110	|	[Balanced Binary Tree](https://oj.leetcode.com/problems/balanced-binary-tree/)	| Easy	|
|		|	109	|	[Convert Sorted List to Binary Search Tree](https://oj.leetcode.com/problems/convert-sorted-list-to-binary-search-tree/)	| Medium	|
|	[C++](./Tree/ConvertSortedArrayBinarySearchTree.cpp)	|	108	|	[Convert Sorted Array to Binary Search Tree](https://oj.leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)	| Medium	|
|	[C++](./Tree/BinaryTreeLevelOrderTraversalII.cpp)	|	107	|	[Binary Tree Level Order Traversal II](https://oj.leetcode.com/problems/binary-tree-level-order-traversal-ii/)	| Easy	|
|	[C++](./Tree/ConstructBinaryTreeInorderPostorder.cpp)	|	106	|	[Construct Binary Tree from Inorder and Postorder Traversal](https://oj.leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)	| Medium	|
|	[C++](./Tree/ConstructBinaryTreePreorderInorder.cpp)	|	105	|	[Construct Binary Tree from Preorder and Inorder Traversal](https://oj.leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)	| Medium	|
|	[C++](./Tree/MaximumDepthOfBinaryTree.cpp)	|	104	|	[Maximum Depth of Binary Tree](https://oj.leetcode.com/problems/maximum-depth-of-binary-tree/)	| Easy	|
|	[C++](./Tree/BinaryTreeZigzagLevelOrderTraversal.cpp)	|	103	|	[Binary Tree Zigzag Level Order Traversal](https://oj.leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)	| Medium	|
|	[C++](./Tree/102.BinaryTreeLevelOrderTraversal.cpp)	|	102	|	[Binary Tree Level Order Traversal](https://oj.leetcode.com/problems/binary-tree-level-order-traversal/)	| Easy	|
|	[C++](./Tree/SymmetricTree.cpp)	|	101	|	[Symmetric Tree](https://oj.leetcode.com/problems/symmetric-tree/)	| Easy	|
|	[C++](./Tree/SameTree.cpp)	|	100	|	[Same Tree](https://oj.leetcode.com/problems/same-tree/)	| Easy	|
|	[C++](./Tree/RecoverBinarySearchTree.cpp)	|	99	|	[Recover Binary Search Tree](https://oj.leetcode.com/problems/recover-binary-search-tree/)	| Hard	|
|	[C++](./Tree/ValidateBinarySearchTree.cpp)	|	98	|	[Validate Binary Search Tree](https://oj.leetcode.com/problems/validate-binary-search-tree/)	| Medium	|
|		|	97	|	[Interleaving String](https://oj.leetcode.com/problems/interleaving-string/)	| Hard	|
|	[C++](./Tree/UniqueBinarySearchTrees.cpp)	|	96	|	[Unique Binary Search Trees](https://oj.leetcode.com/problems/unique-binary-search-trees/)	| Medium	|
|		|	95	|	[Unique Binary Search Trees II](https://oj.leetcode.com/problems/unique-binary-search-trees-ii/)	| Medium	|
|	[C++](./Stack/InorderTraversal.cpp)	|	94	|	[Binary Tree Inorder Traversal](https://oj.leetcode.com/problems/binary-tree-inorder-traversal/)	| Medium	|
|		|	93	|	[Restore IP Addresses](https://oj.leetcode.com/problems/restore-ip-addresses/)	| Medium	|
|		|	92	|	[Reverse Linked List II](https://oj.leetcode.com/problems/reverse-linked-list-ii/)	| Medium	|
|	[C++](./DP/DecodeWays.cpp)	|	91	|	[Decode Ways](https://oj.leetcode.com/problems/decode-ways/)	| Medium	|
|	[C++](./DFS/SubsetsII.cpp)	|	90	|	[Subsets II](https://oj.leetcode.com/problems/subsets-ii/)	| Medium	|
|	[C++](./Math/GaryCode.cpp)	|	89	|	[Gray Code](https://oj.leetcode.com/problems/gray-code/)	| Medium	|
|	[C++](./Sort/MergeSortedArray.cpp) |	88	|	[Merge Sorted Array](https://oj.leetcode.com/problems/merge-sorted-array/)	| Easy	|
|		|	87	|	[Scramble String](https://oj.leetcode.com/problems/scramble-string/)	| Hard	|
|	[C++](./LinkedList/PartitionList.cpp)	|	86	|	[Partition List](https://oj.leetcode.com/problems/partition-list/)	| Medium	|
|		|	85	|	[Maximal Rectangle](https://oj.leetcode.com/problems/maximal-rectangle/)	| Hard	|
|		|	84	|	[Largest Rectangle in Histogram](https://oj.leetcode.com/problems/largest-rectangle-in-histogram/)	| Hard	|
|	[C++](./LinkedList/RemoveDuplicatesFromSortedList.cpp)	|	83	|	[Remove Duplicates from Sorted List](https://oj.leetcode.com/problems/remove-duplicates-from-sorted-list/)	| Easy	|
|	[C++](./LinkedList/RemoveDuplicatesFromSortedListII.cpp)	|	82	|	[Remove Duplicates from Sorted List II](https://oj.leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)	| Medium	|
|	[C++](./Search/SearchInRotatedSortedArrayII.cpp)	|	81	|	[Search in Rotated Sorted Array II](https://oj.leetcode.com/problems/search-in-rotated-sorted-array-ii/)	| Medium	|
|	[C++](./Array/RemoveDuplicatesFromSortedArrayII.cpp)	|	80	|	[Remove Duplicates from Sorted Array II](https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)	| Medium	|
|	[C++](./DFS/WordSearch.cpp)	|	79	|	[Word Search](https://oj.leetcode.com/problems/word-search/)	| Medium	|
|	[Swfit](./DFS/Subsets.cpp)	|	78	|	[Subsets](https://oj.leetcode.com/problems/subsets/)	| Medium	|
|	[C++](./DFS/combinations.cpp)	|	77	|	[Combinations](https://oj.leetcode.com/problems/combinations/)	| Medium	|
|	[C++](./Array/MinimumWindowSubstring.cpp)	|	76	|	[Minimum Window Substring](https://oj.leetcode.com/problems/minimum-window-substring/)	| Hard	|
|	[C++](./Sort/SortColors.cpp)	|	75	|	[Sort Colors](https://oj.leetcode.com/problems/sort-colors/)	| Medium	|
|	[C++](./Search/Search2DMatrix.cpp) |	74	|	[Search a 2D Matrix](https://oj.leetcode.com/problems/search-a-2d-matrix/)	| Medium	|
|	[C++](./Array/SetMatrixZero.cpp)	|	73	|	[Set Matrix Zeroes](https://oj.leetcode.com/problems/set-matrix-zeroes/)	| Medium	|
|	[C++](./DP/EditDistance.cpp)	|	72	|	[Edit Distance](https://oj.leetcode.com/problems/edit-distance/)	| Hard	|
|	[C++](./Stack/SimplifyPath.cpp)	|	71	|	[Simplify Path](https://oj.leetcode.com/problems/simplify-path/)	| Medium	|
|	[C++](./DP/ClimbingStairs.cpp)	|	70	|	[Climbing Stairs](https://oj.leetcode.com/problems/climbing-stairs/)	| Easy	|
|	[C++](./Search/Sqrtx.cpp)	|	69	|	[Sqrt(x)](https://oj.leetcode.com/problems/sqrtx/)	| Medium	|
|	[C++](./String/TextJustification.cpp)	|	68	|	[Text Justification](https://oj.leetcode.com/problems/text-justification/)	| Hard	|
|	[C++](./Math/AddBinary.cpp)	|	67	|	[Add Binary](https://oj.leetcode.com/problems/add-binary/)	| Easy	|
|	[C++](./Math/PlusOne.cpp)	|	66	|	[Plus One](https://oj.leetcode.com/problems/plus-one/)	| Easy	|
|	[C++](./Math/ValidNumber.cpp)	|	65	|	[Valid Number](https://oj.leetcode.com/problems/valid-number/)	| Hard	|
|	[C++](./DP/MinimumPathSum.cpp) |	64	|	[Minimum Path Sum](https://oj.leetcode.com/problems/minimum-path-sum/)	| Medium	|
|	[C++](./DP/UniquePathsII.cpp)	|	63	|	[Unique Paths II](https://oj.leetcode.com/problems/unique-paths-ii/)	| Medium	|
|	[C++](./DP/UniquePaths.cpp)	|	62	|	[Unique Paths](https://oj.leetcode.com/problems/unique-paths/)	| Medium	|
|	[C++](./LinkedList/RotateList.cpp)	|	61	|	[Rotate List](https://oj.leetcode.com/problems/rotate-list/)	| Medium	|
|	[C++](./Math/PermutationSequence.cpp)	|	60	|	[Permutation Sequence](https://oj.leetcode.com/problems/permutation-sequence/)	| Medium	|
|	[C++](./Array/SpiralMatrixII.cpp)	|	59	|	[Spiral Matrix II](https://oj.leetcode.com/problems/spiral-matrix-ii/)	| Medium	|
|	[C++](./String/LengthLastWord.cpp)	|	58	|	[Length of Last Word](https://oj.leetcode.com/problems/length-of-last-word/)	| Easy	|
| [C++](./Sort/InsertInterval.cpp) |	57	|	[Insert Interval](https://oj.leetcode.com/problems/insert-interval/)	| Hard	|
|	[C++](./Sort/MergeIntervals.cpp)	|	56	|	[Merge Intervals](https://oj.leetcode.com/problems/merge-intervals/)	| Hard	|
|	[C++](./DP/JumpGame.cpp) |	55	|	[Jump Game](https://oj.leetcode.com/problems/jump-game/)	| Medium	|
|	[C++](./Array/SpiralMatrix.cpp)	|	54	|	[Spiral Matrix](https://oj.leetcode.com/problems/spiral-matrix/)	| Medium	|
|	[C++](./DP/MaximumSubarray.cpp)	|	53	|	[Maximum Subarray](https://oj.leetcode.com/problems/maximum-subarray/)	| Medium	|
|	[C++](./DFS/NQueensII.cpp)	|	52	|	[N-Queens II](https://oj.leetcode.com/problems/n-queens-ii/)	| Hard	|
|	[C++](./DFS/NQueens.cpp)	|	51	|	[N-Queens](https://oj.leetcode.com/problems/n-queens/)	| Hard	|
|	[C++](./Math/Pow.cpp)	|	50	|	["Pow(x, n)"](https://oj.leetcode.com/problems/powx-n/)	| Medium	|
|	[C++](./String/GroupAnagrams.cpp)	|	49	|	[Group Anagrams](https://oj.leetcode.com/problems/anagrams/)	| Medium	|
|	[C++](./Array/RotateImage.cpp)	|	48	|	[Rotate Image](https://oj.leetcode.com/problems/rotate-image/)	| Medium	|
|	[C++](./DFS/PermutationsII.cpp)	|	47	|	[Permutations II](https://oj.leetcode.com/problems/permutations-ii/)	| Medium	|
|	[C++](./DFS/Permutations.cpp)	|	46	|	[Permutations](https://oj.leetcode.com/problems/permutations/)	| Medium	|
|		|	45	|	[Jump Game II](https://oj.leetcode.com/problems/jump-game-ii/)	| Hard	|
|	[C++](./DP/WildcardMatching.cpp)	|	44	|	[Wildcard Matching](https://oj.leetcode.com/problems/wildcard-matching/)	| Hard	|
|	[C++](./String/MultiplyStrings.cpp)	|	43	|	[Multiply Strings](https://oj.leetcode.com/problems/multiply-strings/)	| Medium	|
|	[C++](./Math/TrappingRainWater.cpp)	|	42	|	[Trapping Rain Water](https://oj.leetcode.com/problems/trapping-rain-water/)	| Hard	|
|	[C++](./Array/FirstMissingPositive.cpp)	|	41	|	[First Missing Positive](https://oj.leetcode.com/problems/first-missing-positive/)	| Hard	|
|	[C++](./DFS/combinationSumII.cppc)	|	40	|	[Combination Sum II](https://oj.leetcode.com/problems/combination-sum-ii/)	| Medium	|
|	[C++](./DFS/CombinationSum.cpp)	|	39	|	[Combination Sum](https://oj.leetcode.com/problems/combination-sum/)	| Medium	|
|	[C++](./String/CountAndSay.cpp)	|	38	|	[Count and Say](https://oj.leetcode.com/problems/count-and-say/)	| Easy	|
|	[C++](./Math/SudokuSolver.cpp)	|	37	|	[Sudoku Solver](https://oj.leetcode.com/problems/sudoku-solver/)	| Hard	|
|	[C++](./Array/ValidSudoku.cpp)	|	36	|	[Valid Sudoku](https://oj.leetcode.com/problems/valid-sudoku/)	| Easy	|
|	[C++](./Search/SearchInsertPosition.cpp)	|	35	|	[Search Insert Position](https://oj.leetcode.com/problems/search-insert-position/)	| Medium	|
|	[C++](./Search/SearchForARange.cpp)	|	34	|	[Search for a Range](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)	| Medium	|
|	[C++](./Search/SearchInRotatedSortedArray.cpp)	|	33	|	[Search in Rotated Sorted Array](https://oj.leetcode.com/problems/search-in-rotated-sorted-array/)	| Hard	|
|	[C++](./Stack/LongestValidParentheses.cpp)	|	32	|	[Longest Valid Parentheses](https://oj.leetcode.com/problems/longest-valid-parentheses/)	| Hard	|
|	[C++](./Array/NextPermutation.cpp)	|	31	|	[Next Permutation](https://oj.leetcode.com/problems/next-permutation/)	| Medium	|
|		|	30	|	[Substring with Concatenation of All Words](https://oj.leetcode.com/problems/substring-with-concatenation-of-all-words/)	| Hard	|
|	[C++](./Math/DivideTwoIntegers.cpp)	|	29	|	[Divide Two Integers](https://oj.leetcode.com/problems/divide-two-integers/)	| Medium	|
|	[C++](./String/StrStr.cpp)	|	28	|	[Implement strStr()](https://oj.leetcode.com/problems/implement-strstr/)	| Easy	|
|	[Swfit](./Array/RemoveElement.cpp)	|	27	|	[Remove Element](https://oj.leetcode.com/problems/remove-element/)	| Easy	|
|	[C++](./Array/RemoveDuplicatesFromSortedArray.cpp)	|	26	|	[Remove Duplicates from Sorted Array](https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array/)	| Easy	|
|		|	25	|	[Reverse Nodes in k-Group](https://oj.leetcode.com/problems/reverse-nodes-in-k-group/)	| Hard	|
|	[C++](./LinkedList/SwapNodesInPairs.cpp)	|	24	|	[Swap Nodes in Pairs](https://oj.leetcode.com/problems/swap-nodes-in-pairs/)	| Easy	|
|	[C++](./LinkedList/MergeKSortedLists.cpp)	|	23	|	[Merge k Sorted Lists](https://oj.leetcode.com/problems/merge-k-sorted-lists/)	| Hard	|
|	[C++](./Math/GenerateParentheses.cpp)	|	22	|	[Generate Parentheses](https://oj.leetcode.com/problems/generate-parentheses/)	| Medium	|
|	[C++](./LinkedList/MergeTwoSortedLists.cpp)	|	21	|	[Merge Two Sorted Lists](https://oj.leetcode.com/problems/merge-two-sorted-lists/)	| Easy	|
|	[C++](./Stack/ValidParentheses.cpp)	|	20	|	[Valid Parentheses](https://oj.leetcode.com/problems/valid-parentheses/)	| Easy	|
|	[C++](./LinkedList/RemoveNthFromEnd.cpp)	|	19	|	[Remove Nth Node From End of List](https://oj.leetcode.com/problems/remove-nth-node-from-end-of-list/)	| Easy	|
|	[C++](./Array/FourSum.cpp)	|	18	|	[4Sum](https://oj.leetcode.com/problems/4sum/)	| Medium	|
|	[C++](./DFS/LetterCombinationsPhoneNumber.cpp)	|	17	|	[Letter Combinations of a Phone Number](https://oj.leetcode.com/problems/letter-combinations-of-a-phone-number/)	| Medium	|
|	[C++](./Array/ThreeSum.cpp)	|	16	|	[3Sum Closest](https://oj.leetcode.com/problems/3sum-closest/)	| Medium	|
|	[C++](./Array/ThreeSum.cpp)	|	15	|	[3Sum](https://oj.leetcode.com/problems/3sum/)	| Medium	|
|	[C++](./String/LongestCommonPrefix.cpp)	|	14	|	[Longest Common Prefix](https://oj.leetcode.com/problems/longest-common-prefix/)	| Easy	|
|	[C++](./Math/RomanToInteger.cpp)	|	13	|	[Roman to Integer](https://oj.leetcode.com/problems/roman-to-integer/)	| Easy	|
|	[C++](./Math/IntegerToRoman.cpp)	|	12	|	[Integer to Roman](https://oj.leetcode.com/problems/integer-to-roman/)	| Medium	|
|	[C++](./Math/ContainerMostWater.cpp)	|	11	|	[Container With Most Water](https://oj.leetcode.com/problems/container-with-most-water/)	| Medium	|
|	[C++](./DP/RegularExpressionMatching.cpp)	|	10	|	[Regular Expression Matching](https://oj.leetcode.com/problems/regular-expression-matching/)	| Hard	|
|	[C++](./Math/PalindromeNumber.cpp)	|	9	|	[Palindrome Number](https://oj.leetcode.com/problems/palindrome-number/)	| Easy	|
|	[C++](./Math/Atoi.cpp)	|	8	|	[String to Integer (atoi)](https://oj.leetcode.com/problems/string-to-integer-atoi/)	| Easy	|
|	[C++](./Math/ReverseInteger.cpp)	|	7	|	[Reverse Integer](https://oj.leetcode.com/problems/reverse-integer/)	| Easy	|
|	[C++](./String/ZigZagConversion.cpp)	|	6	|	[ZigZag Conversion](https://oj.leetcode.com/problems/zigzag-conversion/)	| Easy	|
|	[C++](./DP/LongestPalindromicSubstring.cpp)	|	5	|	[Longest Palindromic Substring](https://oj.leetcode.com/problems/longest-palindromic-substring/)	| Medium	|
|	[C++](./Search/MedianOfTwoSortedArrays.cpp)	|	4	|	[Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)	| Hard	|
|	[C++](./String/LongestSubstringWithoutRepeatingCharacters.cpp)	|	3	|	[Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)	| Medium	|
|	[C++](./Math/AddTwoNumbers.cpp)	|	2	|	[Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)	| Medium	|
|	[C++](./Array/TwoSum.cpp)	|	1	|	[Two Sum](https://leetcode.com/problems/two-sum/)	| Easy	|
