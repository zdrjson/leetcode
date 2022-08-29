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
[Verify an Alien Dictionary](https://leetcode.com/problems/verifying-an-alien-dictionary/)|[C++](Array/VerifyingAlienDictionary.C++)| Easy| O(n)| O(n)|
[Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/)|[C++](Array/SortArrayByParity.C++)| Easy| O(n)| O(n)|
[Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/)| [C++](./Array/MaxConsecutiveOnes.C++)| Easy| O(n)| O(1)|
[Heaters](https://leetcode.com/problems/heaters/)| [C++](./Array/Heaters.C++)| Easy| O(nlogn)| O(1)|
[Number of Boomerangs](https://leetcode.com/problems/number-of-boomerangs/)| [C++](./Array/NumberBoomerangs.C++)| Easy| O(n ^ 2)| O(n)|
[Island Perimeter](https://leetcode.com/problems/island-perimeter/)| [C++](./Array/IslandPerimeter.C++)| Easy| O(nm)| O(1)|
[Majority Element](https://leetcode.com/problems/majority-element/)| [C++](./Array/MajorityElement.C++)| Easy| O(n)| O(1)|
[Majority Element II](https://leetcode.com/problems/majority-element-ii/)| [C++](./Array/MajorityElementII.C++)| Medium| O(n)| O(1)|
[First Missing Positive](https://leetcode.com/problems/first-missing-positive/)| [C++](./Array/FirstMissingPositive.C++)| Hard| O(n)| O(n)|
[Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/)| [C++](./Array/IntersectionTwoArrays.C++)| Easy| O(n)| O(n)|
[Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/)| [C++](./Array/IntersectionTwoArraysII.C++)| Easy| O(n)| O(n)|
[Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)| [C++](./Array/ContainsDuplicate.C++)| Easy| O(n)| O(n)|
[Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/)| [C++](./Array/ContainsDuplicateII.C++)| Easy| O(n)| O(n)|
[Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)| [C++](./Array/RemoveDuplicatesFromSortedArray.C++)| Easy| O(n)| O(1)|
[Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)| [C++](./Array/RemoveDuplicatesFromSortedArrayII.C++)| Medium| O(n)| O(1)|
[Move Zeroes](https://leetcode.com/problems/move-zeroes/)| [C++](./Array/MoveZeroes.C++)| Easy| O(n)| O(1)|
[Remove Element](https://leetcode.com/problems/remove-element/)| [C++](./Array/RemoveElement.C++)| Easy| O(n)| O(1)|
[Strobogrammatic Number](https://leetcode.com/problems/strobogrammatic-number/)| [C++](./Array/StrobogrammaticNumber.C++)| Easy| O(n)| O(1)|
[Can Place Flowers](https://leetcode.com/problems/can-place-flowers/)| [C++](./Array/CanPlaceFlowers.C++)| Easy| O(n)| O(1)|
[Two Sum](https://leetcode.com/problems/two-sum/)| [C++](./Array/TwoSum.C++)| Easy| O(n)| O(n)|
[Two Sum II - Input array is sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)| [C++](./Array/TwoSumII.C++)| Easy| O(n)| O(1)|
[Two Sum III - Data structure design](https://leetcode.com/problems/two-sum-iii-data-structure-design/)| [C++](./Array/TwoSumIII.C++)| Easy| O(n)| O(1)|
[Two Sum Less Than K](https://leetcode.com/problems/two-sum-less-than-k/)| [C++](./Array/TwoSumLessThanK.C++)| Easy| O(nlogn)| O(n)|
[3Sum](https://leetcode.com/problems/3sum/)| [C++](./Array/ThreeSum.C++)| Medium| O(n^2)| O(nC3)|
[3Sum Closest](https://leetcode.com/problems/3sum-closest/)| [C++](./Array/ThreeSumClosest.C++)| Medium| O(n^2)| O(nC3)|
[4Sum](https://leetcode.com/problems/4sum/)| [C++](./Array/FourSum.C++)| Medium| O(n^3)| O(nC4)|
[Increasing Triplet Subsequence](https://leetcode.com/problems/increasing-triplet-subsequence/)| [C++](./Array/IncreasingTripletSubsequence.C++)| Medium| O(n)| O(1)|
[Summary Ranges](https://leetcode.com/problems/summary-ranges/)| [C++](./Array/SummaryRanges.C++)| Medium| O(n)| O(n)|
[Range Sum Query 2D - Immutable](https://leetcode.com/problems/range-sum-query-2d-immutable/)| [C++](./Array/NumMatrix.C++)| Medium| O(mn)| O(mn)|
[Missing Ranges](https://leetcode.com/problems/missing-ranges/)| [C++](./Array/MissingRanges.C++)| Medium| O(n)| O(1)|
[Asteroid Collision](https://leetcode.com/problems/asteroid-collision/)| [C++](./Array/735.AsteroidCollision.cpp)| Medium| O(n)| O(n)|
[Maximize Distance to Closest Person](https://leetcode.com/problems/maximize-distance-to-closest-person/)| [C++](./Array/MaximizeDistanceToClosestPerson.C++)| Easy| O(n)| O(1)|
[Exam Room](https://leetcode.com/problems/exam-room/)| [C++](./Array/ExamRoom.C++)| Medium| O(n)| O(n)|
[Shortest Word Distance](https://leetcode.com/problems/shortest-word-distance/)| [C++](./Array/ShortestWordDistance.C++)| Easy| O(n)| O(1)|
[Shortest Word Distance II](https://leetcode.com/problems/shortest-word-distance-ii/)| [C++](./Array/ShortestWordDistanceII.C++)| Medium| O(n)| O(n)|
[Shortest Word Distance III](https://leetcode.com/problems/shortest-word-distance-iii/)| [C++](./Array/ShortestWordDistanceIII.C++)| Medium| O(n)| O(1)|
[Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)| [C++](./Array/MinimumSizeSubarraySum.C++)| Medium| O(n)| O(1)|
[Maximum Size Subarray Sum Equals k](https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/)| [C++](./Array/MaximumSizeSubarraySumEqualsK.C++)| Medium| O(n)| O(n)|
[Smallest Range](https://leetcode.com/problems/smallest-range/)| [C++](./Array/SmallestRange.C++)| Hard | O(nm)| O(nm)|
[Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)| [C++](./Array/ProductExceptSelf.C++)| Medium| O(n)| O(1)|
[Rotate Array](https://leetcode.com/problems/rotate-array/)| [C++](./Array/RotateArray.C++)| Easy| O(n)| O(1)|
[Rotate Image](https://leetcode.com/problems/rotate-image/)| [C++](./Array/RotateImage.C++)| Medium| O(n^2)| O(1)|
[Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)| [C++](./Array/SpiralMatrix.C++)| Medium| O(n^2)| O(1)|
[Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii/)| [C++](./Array/SpiralMatrixII.C++)| Medium| O(n^2)| O(1)|
[Diagonal Traverse](https://leetcode.com/problems/diagonal-traverse/description/)| [C++](./Array/DiagonalTraverse.C++)| Medium| O(mn)| O(1)|
[Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)| [C++](./Array/ValidSudoku.C++)| Easy| O(n^2)| O(n)|
[Set Matrix Zero](https://leetcode.com/problems/set-matrix-zeroes/)| [C++](./Array/SetMatrixZeroes.C++)| Medium| O(n^2)| O(1)|
[Next Permutation](https://leetcode.com/problems/next-permutation/)| [C++](./Array/NextPermutation.C++)| Medium| O(n)| O(1)|
[Gas Station](https://leetcode.com/problems/gas-station/)| [C++](./Array/GasStation.C++)| Medium| O(n)| O(1)|
[Game of Life](https://leetcode.com/problems/game-of-life/)| [C++](./Array/GameLife.C++)| Medium| O(n)| O(1)|
[Task Scheduler](https://leetcode.com/problems/task-scheduler/)| [C++](./Array/TaskScheduler.C++)| Medium| O(nlogn)| O(n)|
[Validate IP Address](https://leetcode.com/problems/validate-ip-address/)| [C++](./Array/ValidateIPAddress.C++)| Medium| O(n)| O(1)|
[Sliding Window Maximum ](https://leetcode.com/problems/sliding-window-maximum/)| [C++](./Array/SlidingWindowMaximum.C++)| Hard| O(n)| O(n)|
[Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)| [C++](./Array/LongestConsecutiveSequence.C++)| Hard| O(n)| O(n)|
[Create Maximum Number](https://leetcode.com/problems/create-maximum-number/)| [C++](./Array/CreateMaximumNumber.C++)| Hard| O(n^2)| O(n)|
[Find All Numbers Disappeared in an Array](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/)| [C++](./Array/FindDisappearedNumbers.C++)| Easy| O(n)| O(1)|

## String
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Fizz Buzz](https://leetcode.com/problems/fizz-buzz/)| [C++](./String/FizzBuzz.C++)| Easy| O(n)| O(1)|
[First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)| [C++](./String/FirstUniqueCharacterInString.C++)| Easy| O(n)| O(1)|
[Keyboard Row](https://leetcode.com/problems/keyboard-row/)| [C++](./String/KeyboardRow.C++)| Easy| O(nm)| O(n)|
[Valid Word Abbreviation](https://leetcode.com/problems/valid-word-abbreviation/)| [C++](./String/ValidWordAbbreviation.C++)| Easy| O(n)| O(n)|
[Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)| [C++](./String/ValidPalindrome.C++)| Easy| O(n)| O(n)|
[Valid Palindrome II](https://leetcode.com/problems/valid-palindrome-ii/)| [C++](./String/ValidPalindromeII.C++)| Easy| O(n)| O(n)|
[Detect Capital](https://leetcode.com/problems/detect-capital/)| [C++](./String/DetectCapital.C++)| Easy| O(n)| O(1)|
[Count and Say](https://leetcode.com/problems/count-and-say/)| [C++](./String/CountAndSay.C++)| Easy| O(n^2)| O(1)|
[Flip Game](https://leetcode.com/problems/flip-game/)| [C++](./String/FlipGame.C++)| Easy| O(n)| O(n)|
[Implement strStr()](https://leetcode.com/problems/implement-strstr/)| [C++](./String/StrStr.C++)| Easy| O(nm)| O(n)|
[Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/)| [C++](./String/IsomorphicStrings.C++)| Easy| O(n)| O(n)|
[Reverse String](https://leetcode.com/problems/reverse-string/)| [C++](./String/ReverseString.C++)| Easy| O(n)| O(n)|
[Reverse String II](https://leetcode.com/problems/reverse-string-ii/)| [C++](./String/ReverseStringII.C++)| Easy| O(n)| O(n)|
[Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string/)| [C++](./String/ReverseVowelsOfAString.C++)| Easy| O(n)| O(n)|
[Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)| [C++](./String/ReverseWordsString.C++)| Medium| O(n)| O(1)|
[Reverse Words in a String II](https://leetcode.com/problems/reverse-words-in-a-string-ii/)| [C++](./String/ReverseWordsStringII.C++)| Medium| O(n)| O(1)|
[Reverse Words in a String III](https://leetcode.com/problems/reverse-words-in-a-string-iii/)| [C++](./String/ReverseWordsStringIII.C++)| Easy| O(n)| O(1)|
[Length of Last Word](https://leetcode.com/problems/length-of-last-word/)| [C++](./String/AddStrings.C++)| Easy| O(n)| O(n)|
[String Compression](https://leetcode.com/problems/string-compression/)| [C++](./String/StringCompression.C++)| Easy| O(n)| O(1)|
[Add Strings](https://leetcode.com/problems/add-strings/)| [C++](./String/LengthLastWord.C++)| Easy| O(n)| O(1)|
[Shortest Distance to a Character](https://leetcode.com/problems/shortest-distance-to-a-character/)| [C++](./String/ShortestDistanceToACharacter.C++)| Easy| O(n)| O(1)|
[Multiply Strings](https://leetcode.com/problems/multiply-strings/)| [C++](./String/MultiplyStrings.C++)| Medium| O(n)| O(1)|
[Palindrome Permutation](https://leetcode.com/problems/palindrome-permutation/)| [C++](./String/PalindromePermutation.C++)| Easy| O(n)| O(n)|
[Valid Anagram](https://leetcode.com/problems/valid-anagram/)| [C++](./String/ValidAnagram.C++)| Easy| O(n)| O(n)|
[Ransom Note](https://leetcode.com/problems/ransom-note/)| [C++](./String/RansomNote.C++)| Easy| O(n)| O(n)|
[Group Anagrams](https://leetcode.com/problems/anagrams/)| [C++](./String/GroupAnagrams.C++)| Medium| O(nmlogm + nlogn)| O(n)
[Find Duplicate File in System](https://leetcode.com/problems/find-duplicate-file-in-system/)| [C++](./String/FindDuplicateFileInSystem.C++)| Medium| O(nm)| O(n)
[Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)| [C++](./String/LongestCommonPrefix.C++)| Easy| O(nm)| O(m)|
[Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)| [C++](./String/LongestSubstringWithoutRepeatingCharacters.C++)| Medium| O(n)| O(n)|
[One Edit Distance](https://leetcode.com/problems/one-edit-distance/)| [C++](./String/OneEditDistance.C++)| Medium| O(n)| O(n)|
[Word Pattern](https://leetcode.com/problems/word-pattern/)| [C++](./String/WordPattern.C++)| Easy| O(n)| O(n)|
[Permutation in String](https://leetcode.com/problems/permutation-in-string/)| [C++](/.String/PermutationInString.C++)| Medium| O(nm)| O(n)|
[Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/)| [C++](/.String/FindAllAnagramsInAString.C++)| Medium| O(n)| O(n)|
[Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)| [C++](./String/MinimumWindowSubstring.C++)| Hard| O(n^2)| O(n)|
[Longest Substring with At Most Two Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/)| [C++](./String/LongestSubstringMostTwoDistinctCharacters.C++)| Hard| O(n)| O(n)|
[Longest Substring with At Most K Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/)| [C++](./String/LongestSubstringMostKDistinctCharacters.C++)| Hard| O(n)| O(n)|
[Text Justification](https://leetcode.com/problems/text-justification/)| [C++](./String/TextJustification.C++)| Hard| O(n)| O(n)|
[Find the Closest Palindrome](https://leetcode.com/problems/find-the-closest-palindrome/)| [C++](./String/FindClosestPalindrome.C++)| Hard| O(n)| O(n)|

## Linked List
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)| [C++](./LinkedList/ReverseLinkedList.C++)| Easy| O(n)| O(1)|
[Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)| [C++](./LinkedList/PalindromeLinkedList.C++)| Easy| O(n)| O(1)|
[Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)| [C++](./LinkedList/SwapNodesInPairs.C++)| Easy| O(n)| O(1)|
[Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)| [C++](./LinkedList/RemoveLinkedListElements.C++)| Easy| O(n)| O(1)|
[Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)| [C++](./LinkedList/RemoveDuplicatesFromSortedList.C++)| Easy| O(n)| O(1)|
[Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)| [C++](./LinkedList/RemoveDuplicatesFromSortedListII.C++)| Medium| O(n)| O(1)|
[Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)| [C++](./LinkedList/RemoveNthFromEnd.C++)| Easy| O(n)| O(1)|
[Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/)| [C++](./LinkedList/OddEvenLinkedList.C++)| Medium| O(n)| O(1)|
[Rotate List](https://leetcode.com/problems/rotate-list/)| [C++](./LinkedList/RotateList.C++)| Medium| O(n)| O(1)|
[Reorder List](https://leetcode.com/problems/reorder-list/)| [C++](./LinkedList/ReorderList.C++)| Medium| O(n)| O(1)|
[Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)| [C++](./LinkedList/MergeTwoSortedLists.C++)| Easy| O(n)| O(1)|
[Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)| [C++](./LinkedList/MergeKSortedLists.C++)| Hard| O(mlogn)| O(1)|
[Partition List](https://leetcode.com/problems/partition-list/)| [C++](./LinkedList/PartitionList.C++)| Medium| O(n)| O(1)|
[LRU Cache](https://leetcode.com/problems/lru-cache/) | [C++](./LinkedList/LRUCache.C++) | Hard| O(1)| O(1)|
[LFU Cache](https://leetcode.com/problems/lfu-cache/) | [C++](./LinkedList/LFUCache.C++) | Hard| O(1)| O(1)|

## Stack
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Min Stack](https://leetcode.com/problems/min-stack/)| [C++](./Stack/MinStack.C++)| Easy| O(1)| O(n)|
[Max Stack](https://leetcode.com/problems/max-stack/)| [C++](./Stack/MaxStack.C++)| Easy| O(n)| O(n)|
[Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)| [C++](./Stack/ValidParentheses.C++)| Easy| O(n)| O(n)|
[Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/)| [C++](./Stack/LongestValidParentheses.C++)| Hard| O(n)| O(n)|
[Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)| [C++](./Stack/EvaluateReversePolishNotation.C++)| Medium| O(n)| O(n)|
[Exclusive Time of Functions](https://leetcode.com/problems/exclusive-time-of-functions/)| [C++](./Stack/ExclusiveTimeFunctions.C++) | Medium| O(n)| O(n)|
[Simplify Path](https://leetcode.com/problems/simplify-path/)| [C++](./Stack/SimplifyPath.C++)| Medium| O(n)| O(n)|
[Remove K Digits](https://leetcode.com/problems/remove-k-digits/)| [C++](./Stack/RemoveKDigits.C++)| Medium| O(n)| O(n)|
[Ternary Expression Parser](https://leetcode.com/problems/ternary-expression-parser/)| [C++](./Stack/TernaryExpressionParser.C++)| Medium| O(n)| O(n)|
[Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)| [C++](./Stack/PreorderTraversal.C++)| Medium| O(n)| O(n)|
[Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)| [C++](./Stack/InorderTraversal.C++)| Medium| O(n)| O(n)|
[Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/)| [C++](./Stack/BinarySearchTreeIterator.C++)| Medium| O(n)| O(n)|
[Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/)| [C++](./Stack/PostorderTraversal.C++)| Hard| O(n)| O(n)|
[Decode String](https://leetcode.com/problems/decode-string/)| [C++](./Stack/DecodeString.C++)| Medium| O(n)| O(n)|
[Basic Calculator](https://leetcode.com/problems/basic-calculator/)| [C++](./Stack/BasicCalculator.C++)| Hard| O(n)| O(n)|

## Queue
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks)| [C++](./Queue/ImplementQueueUsingStacks.C++)| Easy| O(n)| O(n)|

## Tree
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Same Tree](https://oj.leetcode.com/problems/same-tree/)| [C++](./Tree/SameTree.C++)| Easy| O(n)| O(n)|
[Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)| [C++](./Tree/SymmetricTree.C++)| Easy| O(n)| O(n)|
[Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)| [C++](./Tree/InvertBinaryTree.C++)| Easy| O(n)| O(n)|
[Binary Tree Upside Down](https://leetcode.com/problems/binary-tree-upside-down/)| [C++](./Tree/BinaryTreeUpsideDown.C++)| Medium| O(n)| O(1)|
[Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/)| [C++](./Tree/MinimumDepthOfBinaryTree.C++)| Easy| O(n)| O(1)|
[Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)| [C++](./Tree/MaximumDepthOfBinaryTree.C++)| Easy| O(n)| O(1)|
[Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)| [C++](./Tree/DiameterBinaryTree.C++)| Easy| O(n)| O(1)|
[Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)| [C++](./Tree/BalancedBinaryTree.C++)| Easy|  O(n)| O(n)|
[Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/)| [C++](./Tree/SumLeftLeaves.C++)| Easy|  O(n)| O(1)|
[Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/)| [C++](./Tree/FlattenBinaryTreeLinkedList.C++)| Medium| O(n)| O(1)|
[Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)| [C++](./Tree/ConvertSortedArrayBinarySearchTree.C++)| Easy| O(n)| O(1)|
[Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)| [C++](./Tree/ValidateBinarySearchTree.C++)| Medium| O(n)| O(log n)|
[Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)| [C++](./Tree/BinaryTreeLevelOrderTraversal.C++)| Easy| O(n)| O(n)|
[Binary Tree Level Order Traversal II](https://leetcode.com/problems/binary-tree-level-order-traversal-ii/)| [C++](./Tree/BinaryTreeLevelOrderTraversalII.C++)| Easy| O(n)| O(n)|
[Merge Two Binary Trees](https://leetcode.com/problems/merge-two-binary-trees/description/) | [C++](./Tree/MergeTwoBinaryTrees.C++) | Easy | O(n) | O(n) |
[Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)| [C++](./Tree/BinaryTreeZigzagLevelOrderTraversal.C++)| Medium| O(n)| O(n)|
[Binary Tree Vertical Order Traversal](https://leetcode.com/problems/binary-tree-vertical-order-traversal/)| [C++](./Tree/BinaryTreeVerticalOrderTraversal.C++)| Medium| O(n)| O(n)|
[Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)| [C++](./Tree/KthSmallestElementBST.C++)| Medium| O(n)| O(n)|
[Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)| [C++](./Tree/BinaryTreeRightSideView.C++)| Medium| O(n)| O(n)|
[Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)| [C++](./Tree/ConstructBinaryTreePreorderInorder.C++)| Medium| O(nlogn)| O(1)|
[Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)| [C++](./Tree/ConstructBinaryTreeInorderPostorder.C++)| Medium| O(nlogn)| O(1)|
[Path Sum](https://leetcode.com/problems/path-sum/)| [C++](./Tree/PathSum.C++)| Easy| O(n)| O(n)|
[Path Sum II](https://leetcode.com/problems/path-sum-ii/)| [C++](./Tree/PathSumII.C++)| Medium| O(n)| O(n)|
[Path Sum III](https://leetcode.com/problems/path-sum-iii/)| [C++](./Tree/PathSumIII.C++)| Easy| O(n^2)| O(1)|
[Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/)| [C++](./Tree/BinaryTreePaths.C++)| Easy| O(n)| O(n)|
[Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)| [C++](./Tree/BinaryTreeMaximumPathSum.C++)| Hard| O(n)| O(1)|
[House Robber III](https://leetcode.com/problems/house-robber-iii/)| [C++](./Tree/HouseRobberIII.C++)| Medium| O(n)| O(1)|
[Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/)| [C++](./Tree/UniqueBinarySearchTrees.C++)| Medium| O(n^2)| O(n)|
[Recover Binary Search Tree](https://leetcode.com/problems/recover-binary-search-tree/)| [C++](./Tree/RecoverBinarySearchTree.C++)| Hard| O(n)| O(1)|
[Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)| [C++](./Tree/SerializeDeserializeBinaryTree.C++)| Hard| O(n)| O(n)|
[Serialize and Deserialize N-ary Tree](https://leetcode.com/problems/serialize-and-deserialize-n-ary-tree/)| [C++](./Tree/SerializeDeserializeNAryTree.C++)| Hard| O(n)| O(n)|

## Dynamic programming
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Nested List Weight Sum](https://leetcode.com/problems/nested-list-weight-sum/)| [C++](./DP/NestedListWeightSum.C++)| Easy| O(n)| O(1)|
[Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)| [C++](./DP/ClimbingStairs.C++)| Easy| O(n)| O(1)|
[Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/)| [C++](./DP/MinCostClimbingStairs.C++)| Easy| O(n)| O(n)|
[Unique Paths](https://leetcode.com/problems/unique-paths/)| [C++](./DP/UniquePaths.C++)| Medium| O(mn)| O(mn)|
[Unique Paths II](https://leetcode.com/problems/unique-paths-ii/)| [C++](./DP/UniquePathsII.C++)| Medium| O(mn)| O(mn)|
[Nested List Weight Sum II](https://leetcode.com/problems/nested-list-weight-sum-ii/)| [C++](./DP/NestedListWeightSumII.C++)| Medium| O(n)| O(n)|
[Flip Game II](https://leetcode.com/problems/flip-game-ii/)| [C++](./DP/FlipGameII.C++)| Medium| O(n)| O(n)|
[Can I Win](https://leetcode.com/problems/can-i-win/)| [C++](./DP/CanIWin.C++)| Medium| O(2^n)| O(n)|
[Decode Ways](https://leetcode.com/problems/decode-ways/)| [C++](./DP/DecodeWays.C++) | Medium| O(n)|O(n)|
[Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/)| [C++](./DP/MinimumPathSum.C++)| Medium| O(mn)| O(mn)|
[Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)| [C++](./DP/GenerateParentheses.C++)| Medium| O(2^n)| O(n)|
[Different Ways to Add Parentheses](https://leetcode.com/problems/different-ways-to-add-parentheses/)| [C++](./DP/DifferentWaysAddParentheses.C++)| Medium| O(n^n)| O(n)|
[Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)| [C++](./DP/BestTimeBuySellStock.C++)| Easy| O(n)| O(1)|
[Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/)| [C++](./DP/BestTimeBuySellStockII.C++)| Medium| O(n)| O(1)|
[Best Time to Buy and Sell Stock III](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/)| [C++](./DP/BestTimeBuySellStockIII.C++)| Hard| O(n)| O(n)|
[Best Time to Buy and Sell Stock IV](https://leetcode.com/problems/https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/)| [C++](./DP/BestTimeBuySellStockIV.C++)| Hard| O(n^2)| O(n)|
[Best Time to Buy and Sell Stock with Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/)| [C++](./DP/BestTimeBuySellStockCooldown.C++)| Medium| O(n^2)| O(n)|
[Maximum Sum of 3 Non-Overlapping Subarrays](https://leetcode.com/problems/maximum-sum-of-3-non-overlapping-subarrays/)| [C++](./DP/MaximumSumThreeNonOverlappingSubarrays.C++)| Hard| O(n)| O(n)|
[Coin Change](https://leetcode.com/problems/coin-change/)| [C++](./DP/CoinChange.C++)| Medium| O(n^2)| O(n)|
[Coin Change II](https://leetcode.com/problems/coin-change-ii/)| [C++](./DP/CoinChangeII.C++)| Medium| O(n^2)| O(n)|
[Paint House](https://leetcode.com/problems/paint-house/)| [C++](./DP/PaintHouse.C++)| Easy| O(n)| O(n)|
[Paint House II](https://leetcode.com/problems/paint-house-ii/)| [C++](./DP/PaintHouseII.C++)| Hard| O(n)| O(1)|
[Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)| [C++](./DP/LongestIncreasingSubsequence.C++)| Medium| O(nlogn)| O(n)|
[Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/)| [C++](./DP/PalindromicSubstrings.C++)| Medium| O(n^2)| O(n^2)|
[Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)| [C++](./DP/LongestPalindromicSubstring.C++)| Medium| O(n^2)| O(n^2)|
[Perfect Squares](https://leetcode.com/problems/perfect-squares/)| [C++](./DP/PerfectSquares.C++)| Medium| O(n^2)| O(n)|
[House Robber](https://leetcode.com/problems/house-robber/)| [C++](./DP/HouseRobber.C++)| Easy| O(n)| O(1)|
[House Robber II](https://leetcode.com/problems/house-robber-ii/)| [C++](./DP/HouseRobberII.C++)| Medium| O(n)| O(1)|
[Paint Fence](https://leetcode.com/problems/paint-fence/)| [C++](./DP/PaintFence.C++)| Easy| O(n)| O(n)|
[Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)| [C++](./DP/MaximumSubarray.C++)| Medium| O(n)| O(1)|
[Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)| [C++](./DP/MaximumProductSubarray.C++)| Medium| O(n)| O(1)|
[Maximal Square](https://leetcode.com/problems/maximal-square/)| [C++](./DP/MaximalSquare.C++)| Medium| O(mn)| O(mn)|
[Edit Distance](https://leetcode.com/problems/edit-distance/)| [C++](./DP/EditDistance.C++)| Hard| O(mn)| O(mn)|
[Combination Sum IV](https://leetcode.com/problems/combination-sum-iv/)| [C++](./DP/CombinationSumIV.C++)| Medium| O(2^n)| O(n)|
[Triangle](https://leetcode.com/problems/triangle/)| [C++](./DP/Triangle.C++)| Medium| O(2^n)| O(m)|
[Wiggle Subsequence](https://leetcode.com/problems/wiggle-subsequence/)| [C++](./DP/WiggleSubsequence.C++)| Medium| O(n)| O(1)|
[Wildcard Matching](https://leetcode.com/problems/wildcard-matching/)| [C++](./DP/WildcardMatching.C++)| Hard| O(mn)| O(mn)|
[Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/)| [C++](./DP/RegularExpressionMatching.C++)| Hard| O(mn)| O(mn)|
[Minimum Window Subsequence](https://leetcode.com/problems/minimum-window-subsequence/)| [C++](./DP/MinimumWindowSubsequence.C++)| Hard| O(mn)| O(mn)|
[Guess Number Higher or Lower II](https://leetcode.com/problems/guess-number-higher-or-lower-ii/)| [C++](./DP/GuessNumberHigherOrLowerII.C++)| Medium| O(nlogn)| O(n^2)|
[Burst Ballons](https://leetcode.com/problems/burst-balloons/)| [C++](./DP/BurstBalloons.C++)| Hard| O(n^3)| O(n)|
[Frog Jump](https://leetcode.com/problems/frog-jump/)| [C++](./DP/FrogJump.C++)| Hard| O(n^2)| O(n)|
[Jump Game](https://leetcode.com/problems/jump-game/)| [C++](./DP/JumpGame.C++)| Medium| O(n)| O(1)|
[Dungeon Game](https://leetcode.com/problems/dungeon-game/)| [C++](./DP/DungeonGame.C++)| Hard| O(nm)| O(nm)|


## Depth-first search
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Permutations](https://leetcode.com/problems/permutations/)| [C++](./DFS/Permutations.C++)| Medium| O(2^n)| O(n)|
[Permutations II](https://leetcode.com/problems/permutations-ii/)| [C++](./DFS/PermutationsII.C++)| Medium| O(2^n)| O(n)|
[Subsets](https://leetcode.com/problems/subsets/)| [C++](./DFS/Subsets.C++)| Medium| O(n^n)| O(n)|
[Subsets II](https://leetcode.com/problems/subsets-ii/)| [C++](./DFS/SubsetsII.C++)| Medium| O(2^n)| O(n)|
[Combinations](https://leetcode.com/problems/combinations/)| [C++](./DFS/Combinations.C++)| Medium| O(2^n)| O(n)|
[Combination Sum](https://leetcode.com/problems/combination-sum/)| [C++](./DFS/CombinationSum.C++)| Medium| O(2^n)| O(n)|
[Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)| [C++](./DFS/CombinationSumII.C++)| Medium| O(2^n)| O(n)|
[Combination Sum III](https://leetcode.com/problems/combination-sum-iii/)| [C++](./DFS/CombinationSumIII.C++)| Medium| O(2^n)| O(n)|
[Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)| [C++](./DFS/LetterCombinationsPhoneNumber.C++)| Medium| O(4^n)| O(n)|
[Factor Combinations](https://leetcode.com/problems/factor-combinations/)| [C++](./DFS/FactorCombinations.C++)| Medium| O(n^n))| O(2^n - 1)|
[Strobogrammatic Number II](https://leetcode.com/problems/strobogrammatic-number-ii/)| [C++](./DFS/StrobogrammaticNumberII.C++)| Medium| O(m^n)| O(n)|
[Generalized Abbreviation](https://leetcode.com/problems/generalized-abbreviation/)| [C++](./DFS/GeneralizedAbbreviation.C++)| Medium| O(n^n)| O(2^n)|
[Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)| [C++](./DFS/PalindromePartitioning.C++)| Medium| O(n^n)| O(n)|
[Is Graph Bipartite](https://leetcode.com/problems/is-graph-bipartite/)| [C++](./DFS/IsGraphBipartite.C++)| Medium| O(n)| O(n)|
[Number of Islands](https://leetcode.com/problems/number-of-islands/)| [C++](./DFS/NumberofIslands.C++)| Medium| O((mn)^2)| O(1)|
[Walls and Gates](https://leetcode.com/problems/walls-and-gates/)| [C++](./DFS/WallsGates.C++)| Medium| O(n^n)| O(2^n)|
[Word Search](https://leetcode.com/problems/word-search/)| [C++](./DFS/WordSearch.C++)| Medium| O((mn * 4 ^ (k - 1))| O(mn)|
[Word Search II](https://leetcode.com/problems/word-search-ii/)| [C++](./DFS/WordSearchII.C++)| Hard| O(((mn)^2))| O(n^2)|
[Add and Search Word - Data structure design](https://leetcode.com/problems/add-and-search-word-data-structure-design/)| [C++](./DFS/WordDictionary.C++)| Medium| O(n)| O(n)|
[Partition to K Equal Sum Subsets](https://leetcode.com/problems/partition-to-k-equal-sum-subsets/)| [C++](./DFS/PartitionKEqualSumSubsets.C++)| Medium| O(k^n)| O(n)|
[N-Queens](https://leetcode.com/problems/n-queens/)| [C++](./DFS/NQueens.C++)| Hard| O((n^n))| O(n^2)|
[N-Queens II](https://leetcode.com/problems/n-queens-ii/)| [C++](./DFS/NQueensII.C++)| Hard| O((n^n))| O(n)|
[Word Squares](https://leetcode.com/problems/word-squares/)| [C++](./DFS/WordSquares.C++)| Hard| O((n^2))| O(n^2)|
[Word Pattern II](https://leetcode.com/problems/word-pattern-ii/)| [C++](./DFS/WordPatternII.C++)| Hard| O(n^n)| O(n)|
[Sudoku Solver](https://leetcode.com/problems/sudoku-solver/)| [C++](./DFS/SudokuSolver.C++)| Hard| O(n^4)| O(1)|
[Remove Invalid Parentheses](https://leetcode.com/problems/remove-invalid-parentheses/)| [C++](./DFS/RemoveInvalidParentheses.C++)| Hard| O(n^n)| O(n)|
[Expression Add Operators](https://leetcode.com/problems/expression-add-operators/)| [C++](./DFS/ExpressionAddOperators.C++)| Hard| O(n^n)| O(n)|

## Breadth-first search
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Word Ladder](https://leetcode.com/problems/word-ladder/)| [C++](./BFS/WordLadder.C++)| Medium| O(nm)| O(nm)|
[Evaluate Division](https://leetcode.com/problems/evaluate-division/)| [C++](./BFS/EvaluateDivision.C++)| Medium| O(n^2)| O(n)|
[Shortest Distance from All Buildings](https://leetcode.com/problems/shortest-distance-from-all-buildings/)| [C++](./BFS/ShortestDistanceAllBuildings.C++)| Hard| O((mn)^2)| O(mn)|

## Math
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Add Binary](https://leetcode.com/problems/add-binary/)| [C++](./Math/AddBinary.C++)| Easy| O(n)| O(n)|
[Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)| [C++](./Math/AddTwoNumbers.C++)| Medium| O(n)| O(1)|
[Add Digits](https://leetcode.com/problems/add-digits/)| [C++](./Math/AddDigits.C++)| Easy| O(1)| O(1)|
[Plus One](https://leetcode.com/problems/plus-one/)| [C++](./Math/PlusOne.C++)| Easy| O(n)| O(1)|
[Missing Number](https://leetcode.com/problems/missing-number/)| [C++](./Math/MissingNumber.C++)| Easy| O(n)| O(1)|
[Divide Two Integers](https://leetcode.com/problems/divide-two-integers/)| [C++](./Math/DivideTwoIntegers.C++)| Medium| O(logn)| O(1)|
[Number Complement](https://leetcode.com/problems/number-complement/)| [C++](./Math/NumberComplement.C++)| Easy| O(n)| O(1)|
[Hamming Distance](https://leetcode.com/problems/hamming-distance/)| [C++](./Math/HammingDistance.C++)| Easy| O(n)| O(1)|
[Integer Break](https://leetcode.com/problems/integer-break/)| [C++](./Math/IntegerBreak.C++)| Medium| O(logn)| O(1)|
[Factorial Trailing Zeroes](https://leetcode.com/problems/factorial-trailing-zeroes/)| [C++](./Math/FactorialTrailingZeroes.C++)| Medium | O(logn)| O(1)|
[Happy Number](https://leetcode.com/problems/happy-number/)| [C++](./Math/HappyNumber.C++)| Easy| O(n)| O(n)|
[Single Number](https://leetcode.com/problems/single-number/)| [C++](./Math/SingleNumber.C++)| Medium| O(n)| O(1)|
[Ugly Number](https://leetcode.com/problems/ugly-number/)| [C++](./Math/UglyNumber.C++)| Easy| O(logn)| O(1)|
[Ugly Number II](https://leetcode.com/problems/ugly-number-ii/)| [C++](./Math/UglyNumberII.C++)| Medium| O(n)| O(n)|
[Super Ugly Number](https://leetcode.com/problems/super-ugly-number/)| [C++](./Math/SuperUglyNumber.C++)| Medium| O(n^2)| O(n)|
[Count Primes](https://leetcode.com/problems/count-primes/)| [C++](./Math/CountPrimes.C++)| Easy| O(n)| O(n)|
[String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/)| [C++](./Math/Atoi.C++)| Easy| O(n)| O(1)|
[Fraction to Recurring Decimal](https://leetcode.com/problems/fraction-to-recurring-decimal/)| [C++](./Math/FractionToRecurringDecimal.C++) | Medium| O(logn)| O(n)|
[Pow(x, n)](https://leetcode.com/problems/isomorphic-strings/)| [C++](./Math/Pow.C++)| Medium| O(logn)| O(1)|
[Power of Two](https://leetcode.com/problems/power-of-two/)| [C++](./Math/PowerTwo.C++)| Easy| O(1)| O(1)|
[Power of Three](https://leetcode.com/problems/power-of-three/)| [C++](./Math/PowerThree.C++)| Easy| O(1)| O(1)|
[Super Power](https://leetcode.com/problems/super-pow/)| [C++](./Math/SuperPow.C++)| Medium| O(n)| O(1)|
[Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/)| [C++](./Math/SumTwoIntegers.C++)| Easy| O(n)| O(1)|
[Reverse Integer](https://leetcode.com/problems/reverse-integer/)| [C++](./Math/ReverseInteger.C++)| Easy| O(n)| O(1)|
[Excel Sheet Column Number](https://leetcode.com/problems/excel-sheet-column-number/)| [C++](./Math/ExcelSheetColumnNumber.C++)| Easy| O(n)| O(1)|
[Integer to Roman](https://leetcode.com/problems/integer-to-roman/)| [C++](./Math/IntegerToRoman.C++)| Medium| O(n)| O(1)|
[Roman to Integer](https://leetcode.com/problems/roman-to-integer/)| [C++](./Math/RomanToInteger.C++)| Easy| O(n)| O(n)|
[Integer to English Words](https://leetcode.com/problems/integer-to-english-words/)| [C++](./Math/IntegerEnglishWords.C++)| Hard| O(n)| O(1)|
[Sparse Matrix Multiplication](https://leetcode.com/problems/sparse-matrix-multiplication/)| [C++](./Math/SparseMatrixMultiplication.C++)| Medium| O(n^3)| O(n^2)|
[Rectangle Area](https://leetcode.com/problems/rectangle-area/)| [C++](./Math/RectangleArea.C++)| Easy| O(1)| O(1)|
[Minimum Moves to Equal Array Elements](https://leetcode.com/problems/minimum-moves-to-equal-array-elements/)| [C++](./Math/MinimumMovesEqualArrayElements.C++)| Easy| O(n)| O(1)|
[Pour Water](https://leetcode.com/problems/pour-water/)| [C++](./Math/TrappingRainWater.C++)| Hard| O(n)| O(n)|
[Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)| [C++](./Math/TrappingRainWater.C++)| Medium| O(nk)| O(1)|
[Container With Most Water](https://leetcode.com/problems/container-with-most-water/)| [C++](./Math/ContainerMostWater.C++)| Medium| O(n)| O(1)|
[Counting Bits](https://leetcode.com/problems/counting-bits/)| [C++](./Math/CountingBits.C++)| Medium| O(n)| O(n)|
[K-th Smallest in Lexicographical Order](https://leetcode.com/problems/k-th-smallest-in-lexicographical-order/)| [C++](./Math/KthSmallestLexicographicalOrder.C++)| Hard| O(n)| O(1)|
[Gary Code](https://leetcode.com/problems/gray-code/)| [C++](./Math/GaryCode.C++)| Medium| O(n)| O(2^n)|
[Permutation Sequence](https://leetcode.com/problems/permutation-sequence/)| [C++](./Math/PermutationSequence.C++)| Medium| O(n^2)| O(1)|
[Line Reflection](https://leetcode.com/problems/line-reflection/)| [C++](./Math/LineReflection.C++)| Medium| O(n)| O(n)|
[Valid Number](https://leetcode.com/problems/valid-number/)| [C++](./Math/ValidNumber.C++)| Hard| O(n)| O(1)|

## Search
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Closest Binary Search Tree Value](https://leetcode.com/problems/closest-binary-search-tree-value/)| [C++](./Search/ClosestBinarySearchTreeValue.C++)| Easy| O(logn)| O(1)|
[Closest Binary Search Tree Value II](https://leetcode.com/problems/closest-binary-search-tree-value-ii/)| [C++](./Search/ClosestBinarySearchTreeValueII.C++)| Hard| O(n)| O(n)|
[Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)| [C++](./Search/SearchInRotatedSortedArray.C++)| Hard| O(logn)| O(1)|
[Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/)| [C++](./Search/SearchInRotatedSortedArrayII.C++)| Medium| O(logn)| O(1)|
[Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)| [C++](./Search/FindMinimumRotatedSortedArray.C++)| Medium| O(logn)| O(1)|
[Find Minimum in Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/)| [C++](./Search/FindMinimumRotatedSortedArrayII.C++)| Hard| O(logn)| O(1)|
[Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)| [C++](./Search/Search2DMatrix.C++)| Medium| O(log(m + n))| O(1)|
[Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/)| [C++](./Search/Search2DMatrixII.C++)| Medium| O(m + n)| O(1)|
[Search for a Range](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)| [C++](./Search/SearchForARange.C++)| Medium| O(logn)| O(1)|
[Search Insert Position](https://leetcode.com/problems/search-insert-position/)| [C++](./Search/SearchInsertPosition.C++)| Medium| O(logn)| O(1)|
[Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)| [C++](./Search/PeakIndexMountainArray.C++)| Easy| O(logn)| O(1)|
[Find Peak Element](https://leetcode.com/problems/find-peak-element/)| [C++](./Search/FindPeakElement.C++)| Medium| O(logn)| O(1)|
[Random Pick with Weight](https://leetcode.com/problems/random-pick-with-weight/)| [C++](./Search/RandomPickWeight.C++)| Medium| O(logn)| O(1)|
[Sqrt(x)](https://leetcode.com/problems/sqrtx/)| [C++](./Search/Sqrtx.C++)| Medium| O(logn)| O(1)|
[Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)| [C++](./Search/MedianTwoSortedArrays.C++)| Hard| O(log(m + n))| O(1)|
[Minimize Max Distance to Gas Station](https://leetcode.com/problems/minimize-max-distance-to-gas-station/)| [C++](./Search/MinimizeMaxDistanceGasStation.C++)| Hard| O(nlogm)| O(1)|

## Sort
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)| [C++](./Sort/MergeSortedArray.C++)| Easy| O(n)| O(1)|
[Sort Colors](https://leetcode.com/problems/sort-colors/)| [C++](./Sort/SortColors.C++)| Medium| O(n)| O(1)|
[Wiggle Sort](https://leetcode.com/problems/wiggle-sort/)| [C++](./Sort/WiggleSort.C++)| Medium| O(n)| O(1)|
[Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/)| [C++](./Sort/WiggleSortII.C++)| Medium| O(nlogn)| O(n)|
[Sort Transformed Array](https://leetcode.com/problems/sort-transformed-array/)| [C++](./Sort/SortTransformedArray.C++)| Medium| O(n)| O(1)|
[Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)| [C++](./Sort/TopKFrequentElements.C++)| Medium| O(nlogn)| O(n)|
[Meeting Rooms](https://leetcode.com/problems/meeting-rooms/)| [C++](./Sort/MeetingRooms.C++)| Easy| O(nlogn)| O(1)|
[Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/)| [C++](./Sort/MeetingRoomsII.C++)| Medium| O(nlogn)| O(n)|
[Merge Intervals](https://leetcode.com/problems/merge-intervals/)| [C++](./Sort/MergeIntervals.C++)| Hard| O(nlogn)| O(n)|
[Alien Dictionary](https://leetcode.com/problems/alien-dictionary/)| [C++](./Graph/AlienDictionary.C++)| Hard| O(nm)| O(nm)|
[Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)| [C++](./Sort/KthLargestElementInArray.C++)| Medium| O(nlogn)| O(n)|
[Array Partition I](https://leetcode.com/problems/array-partition-i/description/)| [C++](./Sort/ArrayPartitionI.C++)|Easy| O(nlogn)| O(n)|
[Insert Interval](https://leetcode.com/problems/insert-interval/description/)| [C++](./Sort/InsertInterval.C++)|Hard| O(n)| O(1)|
[Largest Number](https://leetcode.com/problems/largest-number/)| [C++](./Sort/LargestNumber.C++)| Medium| O(nlogn)| O(1)|

## Graph
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Number of Connected Components in an Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)| [C++](./Graph/NumberConnectedComponentsUndirectedGraph.C++)| Medium| O(nlogn)| O(n)|
[Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree/)| [C++](./Graph/GraphValidTree.C++)| Medium| O(nlogn)| O(n)|
[Number of Islands II](https://leetcode.com/problems/number-of-islands-ii/)| [C++](./Graph/NumberIslandsII.C++)| Hard| O(klogmn)| O(mn)|
[Course Schedule](https://leetcode.com/problems/course-schedule/)| [C++](./Graph/CourseSchedule.C++)| Medium| O(n)| O(n)|
[Course Schedule II](https://leetcode.com/problems/course-schedule-ii/)| [C++](./Graph/CourseScheduleII.C++)| Medium| O(n)| O(n)|

## Design
| Title | Solution | Difficulty | Time | Space |
| ----- | -------- | ---------- | ---- | ----- |
[Shuffle an Array](https://leetcode.com/problems/shuffle-an-array/)| [C++](./Design/ShuffleAnArray.C++)| Easy| O(n)| O(1)|
[Design HashMap](https://leetcode.com/problems/design-hashmap/)| [C++](./Design/DesignHashMap.C++)| Easy| O(n)| O(n)|
[Design Tic-Tac-Toe](https://leetcode.com/problems/design-tic-tac-toe/)| [C++](./Design/DesignTicTacToe.C++)| Medium| O(1)| O(n)|
[Flatten Nested List Iterator](https://leetcode.com/problems/flatten-nested-list-iterator)| [C++](./Design/FlattenNestedListIterator.C++)| Medium| O(n)| O(n)|
[Flatten 2D Vector](https://leetcode.com/problems/flatten-2d-vector/)| [C++](./Design/Vector2D.C++)| Medium | O(n)| O(n)|
[Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)| [C++](./Design/ImplementTrie.C++)| Medium | O(n)| O(n)|
[Add and Search Word - Data structure design](https://leetcode.com/problems/add-and-search-word-data-structure-design/)| [C++](./Design/AddSearchWord.C++)| Medium | O(24^n)| O(n)|
[Insert Delete GetRandom O(1)](https://leetcode.com/problems/insert-delete-getrandom-o1/)| [C++](./Design/InsertDeleteGetRandom.C++)| Medium| O(1)| O(n)|
[LRU Cache](https://leetcode.com/problems/lru-cache/)| [C++](./Design/LRUCache.C++)| Hard| O(1)| O(n)|
[All O`one Data Structure](https://leetcode.com/problems/all-oone-data-structure/)| [C++](./Design/AllOne.C++)| Hard| O(1)| O(n)|


## Google
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Plus One](https://leetcode.com/problems/plus-one/)| [C++](./Math/PlusOne.C++)| Easy| ★★★★★★|
[Number of Islands](https://leetcode.com/problems/number-of-islands/)| [C++](./DFS/NumberofIslands.C++)| Medium| ★★★★|
[Summary Ranges](https://leetcode.com/problems/summary-ranges/)| [C++](./Array/SummaryRanges.C++)| Medium| ★★★★|
[Perfect Squares](https://leetcode.com/problems/perfect-squares/)| [C++](./DP/PerfectSquares.C++)| Medium| ★★★★|
[Merge Intervals](https://leetcode.com/problems/merge-intervals/)| [C++](./Sort/MergeIntervals.C++)| Hard| ★★★|
[Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)| [C++](./Stack/ValidParentheses.C++)| Easy| ★★★|
[Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)| [C++](./Math/TrappingRainWater.C++)| Hard| ★★|
[Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)| [C++](./LinkedList/MergeKSortedLists.C++)| Hard| ★★|
[Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)| [C++](./Array/LongestConsecutiveSequence.C++)| Hard| ★★|
[Find Peak Element](https://leetcode.com/problems/find-peak-element/)| [C++](./Search/FindPeakElement.C++)| Medium| ★★|
[Power of Two](https://leetcode.com/problems/power-of-two/)| [C++](./Math/PowerTwo.C++)| Easy| ★★|
[Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)| [C++](./Array/SpiralMatrix.C++)| Medium| ★★|
[Sliding Window Maximum ](https://leetcode.com/problems/sliding-window-maximum/)| [C++](./Array/SlidingWindowMaximum.C++)| Hard| ★★|
[Pow(x, n)](https://leetcode.com/problems/isomorphic-strings/)| [C++](./Math/Pow.C++)| Medium| ★★|
[Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)| [C++](./DFS/LetterCombinationsPhoneNumber.C++)| Medium| ★★|
[Heaters](https://leetcode.com/problems/heaters/)| [C++](./Array/Heaters.C++)| Easy| ★|

## Facebook
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[3Sum](https://leetcode.com/problems/3sum/)| [C++](./Array/ThreeSum.C++)| Medium| ★★★★★★|
[Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)| [C++](./String/ValidPalindrome.C++)| Easy| ★★★★★★|
[Valid Palindrome II](https://leetcode.com/problems/valid-palindrome-ii/)| [C++](./String/ValidPalindromeII.C++)| Easy| ★★★★★★|
[Move Zeroes](https://leetcode.com/problems/move-zeroes/)| [C++](./Array/MoveZeroes.C++)| Easy| ★★★★★★|
[Remove Invalid Parentheses](https://leetcode.com/problems/remove-invalid-parentheses/)| [C++](./DFS/RemoveInvalidParentheses.C++)| Hard| ★★★★★★|
[Add Binary](https://leetcode.com/problems/add-binary/)| [C++](./Math/AddBinary.C++)| Easy| ★★★★★|
[Two Sum](https://leetcode.com/problems/two-sum/)| [C++](./Array/TwoSum.C++)| Easy| ★★★★★|
[Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/)| [C++](./Tree/BinaryTreePaths.C++)| Easy| ★★★★|
[Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)| [C++](./DFS/LetterCombinationsPhoneNumber.C++)| Medium| ★★★★|
[Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)| [C++](./LinkedList/MergeKSortedLists.C++)| Hard| ★★★★|
[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)| [C++](./LinkedList/ReverseLinkedList.C++)| Easy| ★★★|
[Merge Intervals](https://leetcode.com/problems/merge-intervals/)| [C++](./Sort/MergeIntervals.C++)| Hard| ★★★|
[Number of Islands](https://leetcode.com/problems/number-of-islands/)| [C++](./DFS/NumberofIslands.C++)| Medium| ★★★|
[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)| [C++](./LinkedList/ReverseLinkedList.C++)| Easy| ★★★|
[Expression Add Operators](https://leetcode.com/problems/expression-add-operators/)| [C++](./DFS/ExpressionAddOperators.C++)| Hard| ★★★|
[Subsets](https://leetcode.com/problems/subsets/)| [C++](./DFS/Subsets.C++)| Medium| ★★★|
[Sort Colors](https://leetcode.com/problems/sort-colors/)| [C++](./Sort/SortColors.C++)| Medium| ★★|

## Snapchat
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Game of Life](https://leetcode.com/problems/game-of-life/)	|	[C++](./Array/GameLife.C++)| Medium| ★★★★★★|
[Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/)| [C++](./Sort/MeetingRoomsII.C++)| Medium| ★★★★★★|
[Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)| [C++](./Array/ValidSudoku.C++)| Easy| ★★★★★|
[Binary Tree Vertical Order Traversal](https://leetcode.com/problems/binary-tree-vertical-order-traversal/)| [C++](./Tree/BinaryTreeVerticalOrderTraversal.C++)| Medium| ★★★★|
[Alien Dictionary](https://leetcode.com/problems/alien-dictionary/)| [C++](./Graph/AlienDictionary.C++)| Hard| ★★★★|
[One Edit Distance](https://leetcode.com/problems/one-edit-distance/)| [C++](./String/OneEditDistance.C++)| Medium| ★★★|
[Sudoku Solver](https://leetcode.com/problems/sudoku-solver/)| [C++](./Math/SudokuSolver.C++)| Hard| ★★★|
[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)| [C++](./LinkedList/ReverseLinkedList.C++)| Easy| ★★|
[Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/)| [C++](./Tree/UniqueBinarySearchTrees.C++)| Medium| ★★|
[Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)| [C++](./String/MinimumWindowSubstring.C++)| Hard| ★★|
[Remove K Digits](https://leetcode.com/problems/remove-k-digits/)| [C++](./Stack/RemoveKDigits.C++)| Medium| ★|
[Ternary Expression Parser](https://leetcode.com/problems/ternary-expression-parser/)| [C++](./Stack/TernaryExpressionParser.C++)| Medium| ★|

## Uber
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)| [C++](./Array/ValidSudoku.C++)| Easy| ★★★★|
[Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)| [C++](./Array/SpiralMatrix.C++)| Medium| ★★★★|
[Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)| [C++](./DFS/LetterCombinationsPhoneNumber.C++)| Medium| ★★★★|
[Group Anagrams](https://leetcode.com/problems/anagrams/)| [C++](./String/GroupAnagrams.C++)| Medium| ★★★★|
[Word Pattern](https://leetcode.com/problems/word-pattern/)| [C++](./String/WordPattern.C++)| Easy| ★★★|
[Roman to Integer](https://leetcode.com/problems/roman-to-integer/)| [C++](./Math/RomanToInteger.C++)| Easy| ★★★|
[Combination Sum](https://leetcode.com/problems/combination-sum/)| [C++](./DFS/CombinationSum.C++)| Medium| ★★|

## Airbnb
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Two Sum](https://leetcode.com/problems/two-sum/)| [C++](./Array/TwoSum.C++)| Easy| ★★★★★|
[Text Justification](https://leetcode.com/problems/text-justification/)| [C++](./String/TextJustification.C++)| Hard| ★★★★|
[House Robber](https://leetcode.com/problems/house-robber/)| [C++](./DP/HouseRobber.C++)| Easy| ★★|
[Single Number](https://leetcode.com/problems/single-number/)| [C++](./Math/SingleNumber.C++)| Medium| ★★|
[Word Search II](https://leetcode.com/problems/word-search-ii/)| [C++](./DFS/WordSearchII.C++)| Hard| ★★|
[Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)| [C++](./Math/AddTwoNumbers.C++)| Medium| ★★|

## LinkedIn
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)| [C++](./DP/MaximumSubarray.C++)| Medium| ★★★★★★|
[Pow(x, n)](https://leetcode.com/problems/isomorphic-strings/)| [C++](./Math/Pow.C++)| Medium| ★★★★★★|
[Merge Intervals](https://leetcode.com/problems/merge-intervals/)| [C++](./Sort/MergeIntervals.C++)| Hard| ★★★★★★|
[Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/)| [C++](./String/IsomorphicStrings.C++)| Easy| ★★★★★★|
[Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)| [C++](./Search/SearchInRotatedSortedArray.C++)| Hard| ★★★★★|
[Search for a Range](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)| [C++](./Search/SearchForARange.C++)| Medium| ★★★★★|
[Two Sum](https://leetcode.com/problems/two-sum/)| [C++](./Array/TwoSum.C++)| Easy| ★★★★|
[Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)| [C++](./Tree/BinaryTreeLevelOrderTraversal.C++)| Easy| ★★★★|
[Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)| [C++](./Stack/EvaluateReversePolishNotation.C++)| Medium| ★★★|
[Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)| [C++](./DP/MaximumProductSubarray.C++)| Medium| ★★★|
[Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)| [C++](./Array/ProductExceptSelf.C++)| Medium| ★★★|
[Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)| [C++](./Tree/SymmetricTree.C++)| Easy| ★★|

## Amazon
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Two Sum](https://leetcode.com/problems/two-sum/)| [C++](./Array/TwoSum.C++)| Easy| ★★★★★★|
[Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/)| [C++](./DP/MinCostClimbingStairs.C++)| Easy| ★★★★|
[Number of Islands](https://leetcode.com/problems/number-of-islands/)| [C++](./DFS/NumberofIslands.C++)| Medium| ★★|
[Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)| [C++](./Math/AddTwoNumbers.C++)| Medium| ★★|
[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)| [C++](./LinkedList/ReverseLinkedList.C++)| Easy| ★★|
[Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)| [C++](./Stack/ValidParentheses.C++)| Easy| ★★|
[Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)| [C++](./DP/LongestPalindromicSubstring.C++)| Medium| ★★|
[Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)| [C++](./Math/TrappingRainWater.C++)| Hard| ★★|
[Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)| [C++](./String/LongestSubstringWithoutRepeatingCharacters.C++)| Medium| ★★|
[Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)| [C++](./DFS/LetterCombinationsPhoneNumber.C++)| Medium| ★★|
[Valid Anagram](https://leetcode.com/problems/valid-anagram/)| [C++](./String/ValidAnagram.C++)| Easy| ★★|
[Rotate Image](https://leetcode.com/problems/rotate-image/)| [C++](./Array/RotateImage.C++)| Medium| ★★|
[Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)| [C++](./DP/BestTimeBuySellStock.C++)| Easy| ★★|
[3Sum](https://leetcode.com/problems/3sum/)| [C++](./Array/ThreeSum.C++)| Medium| ★★|
[Sliding Window Maximum ](https://leetcode.com/problems/sliding-window-maximum/)| [C++](./Array/SlidingWindowMaximum.C++)| Hard| ★★|

## Microsoft
| Title | Solution | Difficulty | Frequency |
| ----- | -------- | ---------- | --------- |
[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)| [C++](./LinkedList/ReverseLinkedList.C++)| Easy| ★★★★★★|
[Two Sum](https://leetcode.com/problems/two-sum/)| [C++](./Array/TwoSum.C++)| Easy| ★★★★★|
[String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/)| [C++](./Math/Atoi.C++)| Easy| ★★★★|
[Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)| [C++](./Math/AddTwoNumbers.C++)| Medium| ★★★★|
[Excel Sheet Column Number](https://leetcode.com/problems/excel-sheet-column-number/)| [C++](./Math/ExcelSheetColumnNumber.C++)| Easy| ★★★★|
[Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)| [C++](./Tree/ValidateBinarySearchTree.C++)| Medium| ★★★|
[Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)| [C++](./LinkedList/MergeTwoSortedLists.C++)| Easy| ★★★|



## Problem Status
| Solution | Number | Title | Difficulty |
| -------- | ------ | ----- | ---------- |
| [C++](./LinkedList/LFUCache.C++)	|	460	|	[LFU Cache](https://oj.leetcode.com/problems/lfu-cache/)	| Hard	|
| [C++](./Array/FindDisappearedNumbers.C++)| 448| [Find All Numbers Disappeared in an Array](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/)| Easy|
| [C++](./DFS/CombinationSumIV.C++)	|	377	|	[Combination Sum IV](https://leetcode.com/problems/combination-sum-iv/)	|	Medium
|		|	376	|	[Wiggle Subsequence](https://leetcode.com/problems/wiggle-subsequence/)	|	Medium
|	[C++](./DP/GuessNumberHigherOrLowerII.C++)	|	375	|	[Guess Number Higher or Lower II](https://leetcode.com/problems/guess-number-higher-or-lower-ii/)	|	Medium
|		|	374	|	[Guess Number Higher or Lower](https://leetcode.com/problems/guess-number-higher-or-lower/)	| Easy
|		|	373	|	[Find K Pairs with Smallest Sums](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/)	|	Medium
|	[C++](./Math/SuperPow.C++)	|	372	|	[Super Pow](https://leetcode.com/problems/super-pow/)	|	Medium
|	[C++](./Math/SumTwoIntegers.C++)	|	371	|	[Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/)	| Easy
|		|	370	|	[Range Addition](https://leetcode.com/problems/range-addition/) &hearts;	|	Medium
|		|	369	|	[Plus One Linked List](https://leetcode.com/problems/plus-one-linked-list/) &hearts;	|	Medium
|		|	368	|	[Largest Divisible Subset](https://leetcode.com/problems/largest-divisible-subset/)	|	Medium
|		|	367	|	[Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/)	|	Medium
|		|	366	|	[Find Leaves of Binary Tree](https://leetcode.com/problems/find-leaves-of-binary-tree/) &hearts;	|	Medium
|		|	365	|	[Water and Jug Problem](https://leetcode.com/problems/water-and-jug-problem/)	|	Medium
| [C++](./DP/NestedListWeightSumII.C++)		|	364	|	[Nested List Weight Sum II](https://leetcode.com/problems/nested-list-weight-sum-ii/) &hearts;	|	Medium
|		|	363	|	[Max Sum of Rectangle No Larger Than K](https://leetcode.com/problems/max-sum-of-sub-matrix-no-larger-than-k/)	|	Hard
|		|	362	|	[Design Hit Counter](https://leetcode.com/problems/design-hit-counter/) &hearts;	|	Medium
|		|	361	|	[Bomb Enemy](https://leetcode.com/problems/bomb-enemy/) &hearts;	|	Medium
| [C++](./Sort/SortTransformedArray.C++)	|	360	|	[Sort Transformed Array](https://leetcode.com/problems/sort-transformed-array/) &hearts;	|	Medium
|		|	359	|	[Logger Rate Limiter](https://leetcode.com/problems/logger-rate-limiter/) &hearts;	| Easy
|		|	358	|	[Rearrange String k Distance Apart](https://leetcode.com/problems/rearrange-string-k-distance-apart/) &hearts;	|	Hard
|		|	357	|	[Count Numbers with Unique Digits](https://leetcode.com/problems/count-numbers-with-unique-digits/)	|	Medium
|		|	356	|	[Line Reflection](https://leetcode.com/problems/line-reflection/) &hearts;	|	Medium
|		|	355	|	[Design Twitter](https://leetcode.com/problems/design-twitter/)	|	Medium
|		|	354	|	[Russian Doll Envelopes](https://leetcode.com/problems/russian-doll-envelopes/)	|	Hard
|		|	353	|	[Design Snake Game](https://leetcode.com/problems/design-snake-game/) &hearts;	|	Medium
|		|	352	|	[Data Stream as Disjoint Intervals](https://leetcode.com/problems/data-stream-as-disjoint-intervals/)	|	Hard
|		|	351	|	[Android Unlock Patterns](https://leetcode.com/problems/android-unlock-patterns/) &hearts;	|	Medium
|	[C++](./Array/IntersectionTwoArraysII.C++)	|	350	|	[Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/)	| Easy
|	[C++](./Array/IntersectionTwoArrays.C++)	|	349	|	[Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/)	| Easy
|		|	348	|	[Design Tic-Tac-Toe](https://leetcode.com/problems/design-tic-tac-toe/) &hearts;	|	Medium
|	[C++](./Sort/TopKFrequentElements.C++)	|	347	|	[Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)	|	Medium
|		|	346	|	[Moving Average from Data Stream](https://leetcode.com/problems/moving-average-from-data-stream/) &hearts;	| Easy
|	[C++](./String/ReverseVowelsOfAString.C++)	|	345	|	[Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string/)	| Easy
|	[C++](./String/ReverseString.C++)	|	344	|	[Reverse String](https://leetcode.com/problems/reverse-string/)	| Easy
|	[C++](./Math/IntegerBreak.C++)	|	343	|	[Integer Break](https://leetcode.com/problems/integer-break/)	|	Medium
|		|	342	|	[Power of Four](https://leetcode.com/problems/power-of-four/)	| Easy
|	[C++](./Design/FlattenNestedListIterator.C++)	|	341	|	[Flatten Nested List Iterator](https://leetcode.com/problems/flatten-nested-list-iterator/)	|	Medium
|	[C++](./String/LongestSubstringMostKDistinctCharacters.C++)	|	340	|	[Longest Substring with At Most K Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-k-distinct-characters/)  &hearts;	|	Hard
|	[C++](./DP/NestedListWeightSum.C++)	|	339	|	[Nested List Weight Sum](https://leetcode.com/problems/nested-list-weight-sum/)  &hearts;	| Easy
|	[C++](./Math/CountingBits.C++)	|	338	|	[Counting Bits](https://leetcode.com/problems/counting-bits/)	|	Medium
|	[C++](./Tree/HouseRobberIII.C++)	|	337	|	[House Robber III](https://leetcode.com/problems/house-robber-iii/)	|	Medium
|		|	336	|	[Palindrome Pairs](https://leetcode.com/problems/palindrome-pairs/)	|	Hard
|		|	335	|	[Self Crossing](https://leetcode.com/problems/self-crossing/)	|	Hard
|	[C++](./Tree/IncreasingTripletSubsequence.C++)	|	334	|	[Increasing Triplet Subsequence](https://leetcode.com/problems/increasing-triplet-subsequence/)	|	Medium
|		|	333	|	[Largest BST Subtree](https://leetcode.com/problems/largest-bst-subtree/)  &hearts;	|	Medium
|		|	332	|	[Reconstruct Itinerary](https://leetcode.com/problems/reconstruct-itinerary/)	|	Medium
|		|	331	|	[Verify Preorder Serialization of a Binary Tree](https://leetcode.com/problems/verify-preorder-serialization-of-a-binary-tree/)	|	Medium
|		|	330	|	[Patching Array](https://leetcode.com/problems/patching-array/)	|	Hard
|		|	329	|	[Longest Increasing Path in a Matrix](https://leetcode.com/problems/longest-increasing-path-in-a-matrix/)	|	Hard
| [C++](./LinkedList/OddEvenLinkedList.C++)	|	328	|	[Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/)	|	Medium
|		|	327	|	[Count of Range Sum](https://leetcode.com/problems/count-of-range-sum/)	|	Hard
|	[C++](./Math/PowerThree.C++)	|	326	|	[Power of Three](https://leetcode.com/problems/power-of-three/)	| Easy
|	[C++](./Array/MaximumSizeSubarraySumEqualsK.C++)	|	325	|	[Maximum Size Subarray Sum Equals k](https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/)  &hearts;	|	Medium
|	[C++](./Sort/WiggleSortII.C++)	|	324	|	[Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/)	|	Medium
|	[C++](./Sort/NumberConnectedComponentsUndirectedGraph.C++)	|	323	|	[Number of Connected Components in an Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)  &hearts;	|	Medium
|	[C++](./DP/CoinChange.C++)	|	322	|	[Coin Change](https://leetcode.com/problems/coin-change/)	|	Medium
|	[C++](./Array/CreateMaximumNumber.C++)	|	321	|	[Create Maximum Number](https://leetcode.com/problems/create-maximum-number/)	|	Hard
|	[C++](./DFS/GeneralizedAbbreviation.C++) |	320	|	[Generalized Abbreviation](https://leetcode.com/problems/generalized-abbreviation/)  &hearts;	|	Medium
|		|	319	|	[Bulb Switcher](https://leetcode.com/problems/bulb-switcher/)	|	Medium
|		|	318	|	[Maximum Product of Word Lengths](https://leetcode.com/problems/maximum-product-of-word-lengths/)	|	Medium
|	[C++](./BFS/ShortestDistanceAllBuildings.C++)	|	317	|	[Shortest Distance from All Buildings](https://leetcode.com/problems/shortest-distance-from-all-buildings/)  &hearts;	|	Hard
|		|	316	|	[Remove Duplicate Letters](https://leetcode.com/problems/remove-duplicate-letters/)	|	Hard
|		|	315	|	[Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/)	|	Hard
|	[C++](./Tree/BinaryTreeVerticalOrderTraversal.C++)	|	314	|	[Binary Tree Vertical Order Traversal](https://leetcode.com/problems/binary-tree-vertical-order-traversal/) &hearts;	|	Medium
|	[C++](./Math/SuperUglyNumber.C++)	|	313	|	[Super Ugly Number](https://leetcode.com/problems/super-ugly-number/)	|	Medium
|	[C++](./DP/GuessNumberHigherOrLowerII.C++)	|	312	|	[Burst Balloons](https://leetcode.com/problems/burst-balloons/)	|	Hard
|	[C++](./Math/SparseMatrixMultiplication.C++)	|	311	|	[Sparse Matrix Multiplication](https://leetcode.com/problems/sparse-matrix-multiplication/)  &hearts;	|	Medium
|		|	310	|	[Minimum Height Trees](https://leetcode.com/problems/minimum-height-trees/)	|	Medium
|	[C++](./DP/BestTimeBuySellStockCooldown.C++)	|	309	|	[Best Time to Buy and Sell Stock with Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/)	|	Medium
|		|	308	|	[Range Sum Query 2D - Mutable](https://leetcode.com/problems/range-sum-query-2d-mutable/) &hearts;	|	Hard
|		|	307	|	[Range Sum Query - Mutable](https://leetcode.com/problems/range-sum-query-mutable/)	|	Medium
|		|	306	|	[Additive Number](https://leetcode.com/problems/additive-number/)	|	Medium
|	[C++](./Graph/NumberIslandsII.C++)	|	305	|	[Number of Islands II](https://leetcode.com/problems/number-of-islands-ii/)  &hearts;	|	Hard
|	[C++](./Array/NumMatrix.C++)	|	304	|	[Range Sum Query 2D - Immutable](https://leetcode.com/problems/range-sum-query-2d-immutable/)	|	Medium
|		|	303	|	[Range Sum Query - Immutable](https://leetcode.com/problems/range-sum-query-immutable/)	| Easy
|		|	302	|	[Smallest Rectangle Enclosing Black Pixels](https://leetcode.com/problems/smallest-rectangle-enclosing-black-pixels/)  &hearts;	|	Hard
|	[C++](./DFS/RemoveInvalidParentheses.C++)	|	301	|	[Remove Invalid Parentheses](https://leetcode.com/problems/remove-invalid-parentheses/)	|	Hard
|	[C++](./DP/LongestIncreasingSubsequence.C++)	|	300	|	[Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)	|	Medium
|		|	299	|	[Bulls and Cows](https://leetcode.com/problems/bulls-and-cows/)	| Easy	|
|		|	298	|	[Binary Tree Longest Consecutive Sequence](https://leetcode.com/problems/binary-tree-longest-consecutive-sequence/) &hearts;	|	Medium	|
|		|	297	|	[Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)	|	Hard	|
|	[C++](./Tree/UniqueBinarySearchTrees.C++)	|	296	|	[Best Meeting Point](https://leetcode.com/problems/best-meeting-point/) &hearts;	|	Hard	|
|		|	295	|	[Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/)	|	Hard	|
|	[C++](./DP/FlipGameII.C++)	|	294	|	[Flip Game II](https://leetcode.com/problems/flip-game-ii/) &hearts;	|	Medium	|
|	[C++](./String/FlipGame.C++)	|	293	|	[Flip Game](https://leetcode.com/problems/flip-game/) &hearts;	| Easy	|
|		|	292	|	[Nim Game](https://leetcode.com/problems/nim-game/)	| Easy	|
|		|	291	|	[Word Pattern II](https://leetcode.com/problems/word-pattern-ii/) &hearts;	|	Hard	|
|	[C++](./String/WordPattern.C++)	|	290	|	[Word Pattern](https://leetcode.com/problems/word-pattern/)	| Easy	|
|	[C++](./Array/GameLife.C++)	|	289	|	[Game of Life](https://leetcode.com/problems/game-of-life/)	|	Medium	|
|		|	288	|	[Unique Word Abbreviation](https://leetcode.com/problems/unique-word-abbreviation/) &hearts;	| Easy	|
|		|	287	|	[Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)	|	Hard	|
|	[C++](./DFS/NumberofIslands.C++)	|	286	|	[Walls and Gates](https://leetcode.com/problems/walls-and-gates/) &hearts;	|	Medium	|
|		|	285	|	[Inorder Successor in BST](https://leetcode.com/problems/inorder-successor-in-bst/) &hearts;	|	Medium	|
|		|	284	|	[Peeking Iterator](https://leetcode.com/problems/peeking-iterator/)	|	Medium	|
|	[C++](./Array/MoveZeroes.C++)	|	283	|	[Move Zeroes](https://leetcode.com/problems/move-zeroes/)	| Easy	|
|	[C++](./DFS/ExpressionAddOperators.C++)	|	282	|	[Expression Add Operators](https://leetcode.com/problems/expression-add-operators/)	|	Hard	|
|		|	281	|	[Zigzag Iterator](https://leetcode.com/problems/zigzag-iterator/) &hearts;	|	Medium	|
|	[C++](./Sort/WiggleSort.C++)	|	280	|	[Wiggle Sort](https://leetcode.com/problems/wiggle-sort/) &hearts;	|	Medium	|
|	[C++](./DP/PerfectSquares.C++)	|	279	|	[Perfect Squares](https://leetcode.com/problems/perfect-squares/)	|	Medium	|
|		|	278	|	[First Bad Version](https://leetcode.com/problems/first-bad-version/)	| Easy	|
|		|	277	|	[Find the Celebrity](https://leetcode.com/problems/find-the-celebrity/) &hearts;	|	Medium	|
|	[C++](./DP/PaintFence.C++)	|	276	|	[Paint Fence](https://leetcode.com/problems/paint-fence/) &hearts;	| Easy	|
|		|	275	|	[H-Index II](https://leetcode.com/problems/h-index-ii/)	|	Medium	|
|		|	274	|	[H-Index](https://leetcode.com/problems/h-index/)	|	Medium	|
|	[C++](./Math/IntegerEnglishWords.C++)	|	273	|	[Integer to English Words](https://leetcode.com/problems/integer-to-english-words/)	|	Hard	|
|	[C++](./Search/ClosestBinarySearchTreeValueII.C++)	|	272	|	[Closest Binary Search Tree Value II](https://leetcode.com/problems/closest-binary-search-tree-value-ii/) &hearts;	|	Hard	|
|		|	271	|	[Encode and Decode Strings](https://leetcode.com/problems/encode-and-decode-strings/) &hearts;	|	Medium	|
|	[C++](./Search/ClosestBinarySearchTreeValue.C++)	|	270	|	[Closest Binary Search Tree Value](https://leetcode.com/problems/closest-binary-search-tree-value/) &hearts;	| Easy	|
|	[C++](./Graph/AlienDictionary.C++)	|	269	|	[Alien Dictionary](https://leetcode.com/problems/alien-dictionary/) &hearts;	|	Hard	|
|	[C++](./Math/MissingNumber.C++)	|	268	|	[Missing Number](https://leetcode.com/problems/missing-number/)	|	Easy	|
|		|	267	|	[Palindrome Permutation II](https://leetcode.com/problems/palindrome-permutation-ii/) &hearts;	|	Medium	|
|	[C++](./String/PalindromePermutation.C++)	|	266	|	[Palindrome Permutation](https://leetcode.com/problems/palindrome-permutation/) &hearts;	| Easy	|
|	[C++](./DP/PaintHouseII.C++)	|	265	|	[Paint House II](https://leetcode.com/problems/paint-house-ii/) &hearts;	|	Hard	|
|	[C++](./Math/UglyNumberII.C++)	|	264	|	[Ugly Number II](https://leetcode.com/problems/ugly-number-ii/)	|	Medium	|
|	[C++](./Math/UglyNumber.C++)	|	263	|	[Ugly Number](https://leetcode.com/problems/ugly-number/)	| Easy	|
|	[C++](./Sort/GraphValidTree.C++)	|	261	|	[Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree/) &hearts;	|	Medium	|
|		|	260	|	[Single Number III](https://leetcode.com/problems/single-number-iii/)	|	Medium	|
|		|	259	|	[3Sum Smaller](https://leetcode.com/problems/3sum-smaller/) &hearts;	|	Medium	|
|	[C++](./Math/AddDigits.C++)	|	258	|	[Add Digits](https://leetcode.com/problems/add-digits/)	| Easy	|
|	[C++](./Tree/BinaryTreePaths.C++)	|	257	|	[Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/)	| Easy	|
|	[C++](./DP/PaintHouse.C++)	|	256	|	[Paint House](https://leetcode.com/problems/paint-house/) &hearts;	|	Medium	|
|		|	255	|	[Verify Preorder Sequence in Binary Search Tree](https://leetcode.com/problems/verify-preorder-sequence-in-binary-search-tree/) &hearts;	|	Medium	|
|	[C++](./DFS/FactorCombinations.C++)	|	254	|	[Factor Combinations](https://leetcode.com/problems/factor-combinations/) &hearts;	|	Medium	|
|	[C++](./Sort/MeetingRoomsII.C++)	|	253	|	[Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/) &hearts;	|	Medium	|
|	[C++](./Sort/MeetingRooms.C++)	|	252	|	[Meeting Rooms](https://leetcode.com/problems/meeting-rooms/) &hearts;	| Easy	|
|	[C++](./Design/Vector2D.C++)	|	251	|	[Flatten 2D Vector](https://leetcode.com/problems/flatten-2d-vector/) &hearts;	|	Medium	|
|		|	250	|	[Count Univalue Subtrees](https://leetcode.com/problems/count-univalue-subtrees/) &hearts;	|	Medium	|
|		|	249	|	[Group Shifted Strings](https://leetcode.com/problems/group-shifted-strings/) &hearts;	| Easy	|
|		|	248	|	[Strobogrammatic Number III](https://leetcode.com/problems/strobogrammatic-number-iii/) &hearts;	|	Hard	|
|	[C++](./DFS/StrobogrammaticNumberII.C++)	|	247	|	[Strobogrammatic Number II](https://leetcode.com/problems/strobogrammatic-number-ii/) &hearts;	|	Medium	|
|	[C++](./Array/StrobogrammaticNumber.C++)	|	246	|	[Strobogrammatic Number](https://leetcode.com/problems/strobogrammatic-number/) &hearts;	| Easy	|
|	[C++](./Array/ShortestWordDistanceIII.C++)	|	245	|	[Shortest Word Distance III](https://leetcode.com/problems/shortest-word-distance-iii/) &hearts;	|	Medium	|
|	[C++](./String/ShortestWordDistanceII.C++)	|	244	|	[Shortest Word Distance II](https://leetcode.com/problems/shortest-word-distance-ii/) &hearts;	|	Medium	|
| [C++](./String/ShortestWordDistance.C++)	|	243	|	[Shortest Word Distance](https://leetcode.com/problems/shortest-word-distance/) &hearts;	| Easy	|
|	[C++](./String/ValidAnagram.C++)	|	242	|	[Valid Anagram](https://leetcode.com/problems/valid-anagram/)	| Easy	|
|	[C++](./DP/DifferentWaysAddParentheses.C++)	|	241	|	[Different Ways to Add Parentheses](https://leetcode.com/problems/different-ways-to-add-parentheses/)	|	Medium	|
|	[C++](./Search/Search2DMatrixII.C++) 	|	240	|	[Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/)	|	Medium	|
|	[C++](./Array/SlidingWindowMaximum.C++)	|	239	|	[Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)	|	Hard	|
|	[C++](./Array/ProductExceptSelf.C++)	|	238	|	[Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)	|	Medium	|
|		|	237	|	[Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/)	| Easy	|
|		|	236	|	[Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)	|	Medium	|
|	[C++](./Tree/LowestCommonAncestorBinarySearchTree.C++)	|	235	|	[Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)	| Easy	|
|	[C++](./LinkedList/PalindromeLinkedList.C++)	|	234	|	[Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)	| Easy	|
|		|	233	|	[Number of Digit One](https://leetcode.com/problems/number-of-digit-one/)	|	Hard	|
|	[C++](./Queue/ImplementQueueUsingStacks.C++)	|	232	|	[Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)	| Easy	|
|	[C++](./Math/PowerTwo.C++)	|	231	|	[Power of Two](https://leetcode.com/problems/power-of-two/)	| Easy	|
|	[C++](./Tree/KthSmallestElementBST.C++)	|	230	|	[Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)	|	Medium	|
|	[C++](./Array/MajorityElementII.C++)	|	229	|	[Majority Element II](https://leetcode.com/problems/majority-element-ii/)	|	Medium	|
|	[C++](./Array/SummaryRanges.C++)	|	228	|	[Summary Ranges](https://leetcode.com/problems/summary-ranges/)	|	Medium	|
|		|	227	|	[Basic Calculator II](https://leetcode.com/problems/basic-calculator-ii/)	|	Medium	|
|	[C++](./Tree/InvertBinaryTree.C++)	|	226	|	[Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)	| Easy	|
|		|	225	|	[Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/)	| Easy	|
|	[C++](./Stack/BasicCalculator.C++)	|	224	|	[Basic Calculator](https://leetcode.com/problems/basic-calculator/)	|	Hard	|
|	[C++](./Math/RectangleArea.C++)	|	223	|	[Rectangle Area](https://leetcode.com/problems/rectangle-area/)	| Easy	|
|		|	222	|	[Count Complete Tree Nodes](https://leetcode.com/problems/count-complete-tree-nodes/)	|	Medium	|
|	[C++](./DP/MaximalSquare.C++)	|	221	|	[Maximal Square](https://leetcode.com/problems/maximal-square/)	|	Medium	|
|		|	220	|	[Contains Duplicate III](https://leetcode.com/problems/contains-duplicate-iii/)	|	Medium	|
|	[C++](./Array/ContainsDuplicateII.C++)	|	219	|	[Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/)	| Easy	|
|		|	218	|	[The Skyline Problem](https://leetcode.com/problems/the-skyline-problem/)	|	Hard	|
|	[C++](./Array/ContainsDuplicate.C++)	|	217	|	[Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)	| Easy	|
|	[C++](./DFS/combinationSumIII.C++)	|	216	|	[Combination Sum III](https://leetcode.com/problems/combination-sum-iii/)	|	Medium	|
|	[C++](./Sort/KthLargestElementInArray.C++)	|	215	|	[Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)	|	Medium	|
|		|	214	|	[Shortest Palindrome](https://leetcode.com/problems/shortest-palindrome/)	|	Hard	|
|	[C++](./DP/HouseRobberII.C++)	|	213	|	[House Robber II](https://leetcode.com/problems/house-robber-ii/)	|	Medium	|
| [C++](./DFS/WordSearchII.C++)	|	212	|	[Word Search II](https://leetcode.com/problems/word-search-ii/)	|	Hard	|
|	[C++](./DFS/WordDictionary.C++)	|	211	|	[Add and Search Word - Data structure design](https://leetcode.com/problems/add-and-search-word-data-structure-design/)	|	Medium	|
|	[C++](./Graph/CourseScheduleII.C++)	|	210	|	[Course Schedule II](https://leetcode.com/problems/course-schedule-ii/)	|	Medium	|
|	[C++](./Array/MinimumSizeSubarraySum.C++)	|	209	|	[Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)	|	Medium	|
|	[C++](./Design/ImplementTrie.C++)	|	208	|	[Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)	|	Medium	|
|	[C++](./Graph/CourseSchedule.C++)	|	207	|	[Course Schedule](https://leetcode.com/problems/course-schedule/)	|	Medium	|
|	[C++](./LinkedList/ReverseLinkedList.C++)	|	206	|	[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)	| Easy	|
|	[C++](./String/IsomorphicStrings.C++)	|	205	|	[Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/)	| Easy	|
|	[C++](./Math/CountPrimes.C++)	|	204	|	[Count Primes](https://leetcode.com/problems/count-primes/)	| Easy	|
|	[C++](./LinkedList/RemoveLinkedListElements.C++)	|	203	|	[Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/)	| Easy	|
|	[C++](./Math/HappyNumber.C++)	|	202	|	[Happy Number](https://leetcode.com/problems/happy-number/)	| Easy	|
|		|	201	|	[Bitwise AND of Numbers Range](https://leetcode.com/problems/bitwise-and-of-numbers-range/)	|	Medium	|
|	[C++](./DFS/NumberofIslands.C++)	|	200	|	[Number of Islands](https://leetcode.com/problems/number-of-islands/)	|	Medium	|
| [C++](./Tree/BinaryTreeRightSideView.C++)	|	199	|	[Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)	| Medium	|
|	[C++](./DP/HouseRobber.C++)	|	198	|	[House Robber](https://leetcode.com/problems/house-robber/)	| Easy	|
|		|	191	|	[Number of 1 Bits](https://oj.leetcode.com/problems/number-of-1-bits/)	| Easy	|
|		|	190	|	[Reverse Bits](https://oj.leetcode.com/problems/reverse-bits/)	| Easy	|
|	[C++](./Array/RotateArray.C++)	|	189	|	[Rotate Array](https://oj.leetcode.com/problems/rotate-array/)	| Easy	|
|	[C++](./DP/BestTimeBuySellStockIV.C++)	|	188	|	[Best Time to Buy and Sell Stock IV](https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/)	| Hard	|
|		|	187	|	[Repeated DNA Sequences](https://oj.leetcode.com/problems/repeated-dna-sequences/)	| Medium	|
|	[C++](./String/ReverseWordsStringII.C++)	|	186	|	[Reverse Words in a String II](https://oj.leetcode.com/problems/reverse-words-in-a-string-ii/) &hearts;	| Medium	|
|	[C++]((./Sort/LargestNumber.C++))	|	179	|	[Largest Number](https://oj.leetcode.com/problems/largest-number/)	| Medium	|
|		|	174	|	[Dungeon Game](https://oj.leetcode.com/problems/dungeon-game/)	| Hard	|
|	[C++](./Stack/BinarySearchTreeIterator.C++)	|	173	|	[Binary Search Tree Iterator](https://oj.leetcode.com/problems/binary-search-tree-iterator/)	| Medium	|
|	[C++](./Math/FactorialTrailingZeroes.C++)	|	172	|	[Factorial Trailing Zeroes](https://oj.leetcode.com/problems/factorial-trailing-zeroes/)	| Easy	|
|	[C++](./Math/ExcelSheetColumnNumber.C++)	|	171	|	[Excel Sheet Column Number](https://oj.leetcode.com/problems/excel-sheet-column-number/)	| Easy	|
|	[C++](./Array/TwoSumIII.C++)	|	170	|	[Two Sum III - Data structure design](https://oj.leetcode.com/problems/two-sum-iii-data-structure-design/) &hearts;	| Easy	|
| 	[C++](./Array/MajorityElement.C++)  |	169	|	[Majority Element](https://oj.leetcode.com/problems/majority-element/)	| Easy	|
|		|	168	|	[Excel Sheet Column Title](https://oj.leetcode.com/problems/excel-sheet-column-title/)	| Easy	|
|	[C++](./Array/TwoSumII.C++)	|	167	|	[Two Sum II - Input array is sorted](https://oj.leetcode.com/problems/two-sum-ii-input-array-is-sorted/) &hearts;	| Medium	|
|	[C++](./Math/FractionToRecurringDecimal.C++)	|	166	|	[Fraction to Recurring Decimal](https://oj.leetcode.com/problems/fraction-to-recurring-decimal/)	| Medium	|
|		|	165	|	[Compare Version Numbers](https://oj.leetcode.com/problems/compare-version-numbers/)	| Easy	|
|		|	164	|	[Maximum Gap](https://oj.leetcode.com/problems/maximum-gap/)	| Hard	|
|	[C++](./Array/MissingRanges.C++)	|	163	|	[Missing Ranges](https://oj.leetcode.com/problems/missing-ranges/) &hearts;	| Medium	|
|	[C++](./Search/FindPeakElement.C++)	|	162	|	[Find Peak Element](https://oj.leetcode.com/problems/find-peak-element/)	| Medium	|
|	[C++](./String/OneEditDistance.C++)	|	161	|	[One Edit Distance](https://oj.leetcode.com/problems/one-edit-distance/)&hearts;	| Medium	|
|		|	160	|	[Intersection of Two Linked Lists](https://oj.leetcode.com/problems/intersection-of-two-linked-lists/)	| Easy	|
|	[C++](./String/LongestSubstringMostTwoDistinctCharacters.C++)	|	159	|	[Longest Substring with At Most Two Distinct Characters](https://oj.leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/) &hearts;	| Hard	|
|		|	158	|	[Read N Characters Given Read4 II - Call multiple times](https://oj.leetcode.com/problems/read-n-characters-given-read4-ii-call-multiple-times/) &hearts;	| Hard	|
|		|	157	|	[Read N Characters Given Read4](https://oj.leetcode.com/problems/read-n-characters-given-read4/) &hearts;	| Easy	|
|	[C++](./Tree/BinaryTreeUpsideDown) |	156	|	[Binary Tree Upside Down](https://oj.leetcode.com/problems/binary-tree-upside-down/) &hearts;	| Medium	|
|	[C++](./Stack/MinStack.C++)	|	155	|	[Min Stack](https://oj.leetcode.com/problems/min-stack/)	| Easy	|
|	[C++](./Search/FindMinimumRotatedSortedArrayII.C++)	|	154	|	[Find Minimum in Rotated Sorted Array II](https://oj.leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/)	| Hard	|
|	[C++](./Search/FindMinimumRotatedSortedArray.C++)	|	153	|	[Find Minimum in Rotated Sorted Array](https://oj.leetcode.com/problems/find-minimum-in-rotated-sorted-array/)	| Medium	|
|	[C++](./DP/MaximumProductSubarray.C++)	|	152	|	[Maximum Product Subarray](https://oj.leetcode.com/problems/maximum-product-subarray/)	| Medium	|
|	[C++](./String/ReverseWordsString.C++)	|	151	|	[Reverse Words in a String](https://oj.leetcode.com/problems/reverse-words-in-a-string/)	| Medium	|
|	[C++](./Stack/EvaluateReversePolishNotation.C++)	|	150	|	[Evaluate Reverse Polish Notation](https://oj.leetcode.com/problems/evaluate-reverse-polish-notation/)	| Medium	|
|		|	149	|	[Max Points on a Line](https://oj.leetcode.com/problems/max-points-on-a-line/)	| Hard	|
|		|	148	|	[Sort List](https://oj.leetcode.com/problems/sort-list/)	| Medium	|
|		|	147	|	[Insertion Sort List](https://oj.leetcode.com/problems/insertion-sort-list/)	| Medium	|
|	[C++](./LinkedList/LRUCache.C++)	|	146	|	[LRU Cache](https://oj.leetcode.com/problems/lru-cache/)	| Hard	|
|	[C++](./Stack/PostorderTraversal.C++)	|	145	|	[Binary Tree Postorder Traversal](https://oj.leetcode.com/problems/binary-tree-postorder-traversal/)	| Hard	|
|	[C++](./Stack/PreorderTraversal.C++)	|	144	|	[Binary Tree Preorder Traversal](https://oj.leetcode.com/problems/binary-tree-preorder-traversal/)	| Medium	|
|	[C++](./LinkedList/ReorderList.C++)	|	143	|	[Reorder List](https://oj.leetcode.com/problems/reorder-list/)	| Medium	|
|		|	142	|	[Linked List Cycle II](https://oj.leetcode.com/problems/linked-list-cycle-ii/)	| Medium	|
|		|	141	|	[Linked List Cycle](https://oj.leetcode.com/problems/linked-list-cycle/)	| Easy	|
|		|	140	|	[Word Break II](https://oj.leetcode.com/problems/word-break-ii/)	| Hard	|
|		|	139	|	[Word Break](https://oj.leetcode.com/problems/word-break/)	| Medium	|
|		|	138	|	[Copy List with Random Pointer](https://oj.leetcode.com/problems/copy-list-with-random-pointer/)	| Hard	|
|	[C++](./Math/SingleNumberII.C++)	|	137	|	[Single Number II](https://oj.leetcode.com/problems/single-number-ii/)	| Medium	|
|	[C++](./Math/SingleNumber.C++)	|	136	|	[Single Number](https://oj.leetcode.com/problems/single-number/)	| Medium	|
|		|	135	|	[Candy](https://oj.leetcode.com/problems/candy/)	| Hard	|
|	[C++](./Array/GasStation.C++)	|	134	|	[Gas Station](https://oj.leetcode.com/problems/gas-station/)	| Medium	|
|		|	133	|	[Clone Graph](https://oj.leetcode.com/problems/clone-graph/)	| Medium	|
|		|	132	|	[Palindrome Partitioning II](https://oj.leetcode.com/problems/palindrome-partitioning-ii/)	| Hard	|
|	[C++](./DFS/PalindromePartitioning.C++)	|	131	|	[Palindrome Partitioning](https://oj.leetcode.com/problems/palindrome-partitioning/)	| Medium	|
|		|	130	|	[Surrounded Regions](https://oj.leetcode.com/problems/surrounded-regions/)	| Medium	|
|		|	129	|	[Sum Root to Leaf Numbers](https://oj.leetcode.com/problems/sum-root-to-leaf-numbers/)	| Medium	|
| [C++](./Array/LongestConsecutiveSequence.C++)	 | 128	|	[Longest Consecutive Sequence](https://oj.leetcode.com/problems/longest-consecutive-sequence/)	| Hard	|
| [C++](./BFS/WordLadder.C++) |	127	|	[Word Ladder](https://oj.leetcode.com/problems/word-ladder/)	| Medium	|
|		|	126	|	[Word Ladder II](https://oj.leetcode.com/problems/word-ladder-ii/)	| Hard	|
| [C++](./String/ValidPalindrome.C++)		|	125	|	[Valid Palindrome](https://oj.leetcode.com/problems/valid-palindrome/)	| Easy	|
|	[C++](./Tree/BinaryTreeMaximumPathSum.C++)	|	124	|	[Binary Tree Maximum Path Sum](https://oj.leetcode.com/problems/binary-tree-maximum-path-sum/)	| Hard	|
|	[C++](./DP/BestTimeBuySellStockIII.C++)	|	123	|	[Best Time to Buy and Sell Stock III](https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/)	| Hard	|
|	[C++](./DP/BestTimeBuySellStockII.C++)	|	122	|	[Best Time to Buy and Sell Stock II](https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/)	| Medium	|
|	[C++](./DP/BestTimeBuySellStock.C++)	|	121	|	[Best Time to Buy and Sell Stock](https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock/)	| Easy	|
|	[C++](./DP/Triangle.C++)	|	120	|	[Triangle](https://oj.leetcode.com/problems/triangle/)	| Medium	|
|		|	119	|	[Pascal's Triangle II](https://oj.leetcode.com/problems/pascals-triangle-ii/)	| Easy	|
|		|	118	|	[Pascal's Triangle](https://oj.leetcode.com/problems/pascals-triangle/)	| Easy	|
|		|	117	|	[Populating Next Right Pointers in Each Node II](https://oj.leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/)	| Hard	|
|		|	116	|	[Populating Next Right Pointers in Each Node](https://oj.leetcode.com/problems/populating-next-right-pointers-in-each-node/)	| Medium	|
|		|	115	|	[Distinct Subsequences](https://oj.leetcode.com/problems/distinct-subsequences/)	| Hard	|
|	[C++](./Tree/FlattenBinaryTreeLinkedList.C++)	|	114	|	[Flatten Binary Tree to Linked List](https://oj.leetcode.com/problems/flatten-binary-tree-to-linked-list/)	| Medium	|
|	[C++](./Tree/PathSumII.C++)	|	113	|	[Path Sum II](https://oj.leetcode.com/problems/path-sum-ii/)	| Medium	|
|	[C++](./Tree/PathSum.C++)	|	112	|	[Path Sum](https://oj.leetcode.com/problems/path-sum/)	| Easy	|
|	[C++](./Tree/MinimumDepthOfBinaryTree.C++)	|	111	|	[Minimum Depth of Binary Tree](https://oj.leetcode.com/problems/minimum-depth-of-binary-tree/)	| Easy	|
|	[C++](./Tree/BalancedBinaryTree.C++)	|	110	|	[Balanced Binary Tree](https://oj.leetcode.com/problems/balanced-binary-tree/)	| Easy	|
|		|	109	|	[Convert Sorted List to Binary Search Tree](https://oj.leetcode.com/problems/convert-sorted-list-to-binary-search-tree/)	| Medium	|
|	[C++](./Tree/ConvertSortedArrayBinarySearchTree.C++)	|	108	|	[Convert Sorted Array to Binary Search Tree](https://oj.leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)	| Medium	|
|	[C++](./Tree/BinaryTreeLevelOrderTraversalII.C++)	|	107	|	[Binary Tree Level Order Traversal II](https://oj.leetcode.com/problems/binary-tree-level-order-traversal-ii/)	| Easy	|
|	[C++](./Tree/ConstructBinaryTreeInorderPostorder.C++)	|	106	|	[Construct Binary Tree from Inorder and Postorder Traversal](https://oj.leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)	| Medium	|
|	[C++](./Tree/ConstructBinaryTreePreorderInorder.C++)	|	105	|	[Construct Binary Tree from Preorder and Inorder Traversal](https://oj.leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)	| Medium	|
|	[C++](./Tree/MaximumDepthOfBinaryTree.C++)	|	104	|	[Maximum Depth of Binary Tree](https://oj.leetcode.com/problems/maximum-depth-of-binary-tree/)	| Easy	|
|	[C++](./Tree/BinaryTreeZigzagLevelOrderTraversal.C++)	|	103	|	[Binary Tree Zigzag Level Order Traversal](https://oj.leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)	| Medium	|
|	[C++](./Tree/BinaryTreeLevelOrderTraversal.C++)	|	102	|	[Binary Tree Level Order Traversal](https://oj.leetcode.com/problems/binary-tree-level-order-traversal/)	| Easy	|
|	[C++](./Tree/SymmetricTree.C++)	|	101	|	[Symmetric Tree](https://oj.leetcode.com/problems/symmetric-tree/)	| Easy	|
|	[C++](./Tree/SameTree.C++)	|	100	|	[Same Tree](https://oj.leetcode.com/problems/same-tree/)	| Easy	|
|	[C++](./Tree/RecoverBinarySearchTree.C++)	|	99	|	[Recover Binary Search Tree](https://oj.leetcode.com/problems/recover-binary-search-tree/)	| Hard	|
|	[C++](./Tree/ValidateBinarySearchTree.C++)	|	98	|	[Validate Binary Search Tree](https://oj.leetcode.com/problems/validate-binary-search-tree/)	| Medium	|
|		|	97	|	[Interleaving String](https://oj.leetcode.com/problems/interleaving-string/)	| Hard	|
|	[C++](./Tree/UniqueBinarySearchTrees.C++)	|	96	|	[Unique Binary Search Trees](https://oj.leetcode.com/problems/unique-binary-search-trees/)	| Medium	|
|		|	95	|	[Unique Binary Search Trees II](https://oj.leetcode.com/problems/unique-binary-search-trees-ii/)	| Medium	|
|	[C++](./Stack/InorderTraversal.C++)	|	94	|	[Binary Tree Inorder Traversal](https://oj.leetcode.com/problems/binary-tree-inorder-traversal/)	| Medium	|
|		|	93	|	[Restore IP Addresses](https://oj.leetcode.com/problems/restore-ip-addresses/)	| Medium	|
|		|	92	|	[Reverse Linked List II](https://oj.leetcode.com/problems/reverse-linked-list-ii/)	| Medium	|
|	[C++](./DP/DecodeWays.C++)	|	91	|	[Decode Ways](https://oj.leetcode.com/problems/decode-ways/)	| Medium	|
|	[C++](./DFS/SubsetsII.C++)	|	90	|	[Subsets II](https://oj.leetcode.com/problems/subsets-ii/)	| Medium	|
|	[C++](./Math/GaryCode.C++)	|	89	|	[Gray Code](https://oj.leetcode.com/problems/gray-code/)	| Medium	|
|	[C++](./Sort/MergeSortedArray.C++) |	88	|	[Merge Sorted Array](https://oj.leetcode.com/problems/merge-sorted-array/)	| Easy	|
|		|	87	|	[Scramble String](https://oj.leetcode.com/problems/scramble-string/)	| Hard	|
|	[C++](./LinkedList/PartitionList.C++)	|	86	|	[Partition List](https://oj.leetcode.com/problems/partition-list/)	| Medium	|
|		|	85	|	[Maximal Rectangle](https://oj.leetcode.com/problems/maximal-rectangle/)	| Hard	|
|		|	84	|	[Largest Rectangle in Histogram](https://oj.leetcode.com/problems/largest-rectangle-in-histogram/)	| Hard	|
|	[C++](./LinkedList/RemoveDuplicatesFromSortedList.C++)	|	83	|	[Remove Duplicates from Sorted List](https://oj.leetcode.com/problems/remove-duplicates-from-sorted-list/)	| Easy	|
|	[C++](./LinkedList/RemoveDuplicatesFromSortedListII.C++)	|	82	|	[Remove Duplicates from Sorted List II](https://oj.leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)	| Medium	|
|	[C++](./Search/SearchInRotatedSortedArrayII.C++)	|	81	|	[Search in Rotated Sorted Array II](https://oj.leetcode.com/problems/search-in-rotated-sorted-array-ii/)	| Medium	|
|	[C++](./Array/RemoveDuplicatesFromSortedArrayII.C++)	|	80	|	[Remove Duplicates from Sorted Array II](https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)	| Medium	|
|	[C++](./DFS/WordSearch.C++)	|	79	|	[Word Search](https://oj.leetcode.com/problems/word-search/)	| Medium	|
|	[Swfit](./DFS/Subsets.C++)	|	78	|	[Subsets](https://oj.leetcode.com/problems/subsets/)	| Medium	|
|	[C++](./DFS/combinations.C++)	|	77	|	[Combinations](https://oj.leetcode.com/problems/combinations/)	| Medium	|
|	[C++](./Array/MinimumWindowSubstring.C++)	|	76	|	[Minimum Window Substring](https://oj.leetcode.com/problems/minimum-window-substring/)	| Hard	|
|	[C++](./Sort/SortColors.C++)	|	75	|	[Sort Colors](https://oj.leetcode.com/problems/sort-colors/)	| Medium	|
|	[C++](./Search/Search2DMatrix.C++) |	74	|	[Search a 2D Matrix](https://oj.leetcode.com/problems/search-a-2d-matrix/)	| Medium	|
|	[C++](./Array/SetMatrixZero.C++)	|	73	|	[Set Matrix Zeroes](https://oj.leetcode.com/problems/set-matrix-zeroes/)	| Medium	|
|	[C++](./DP/EditDistance.C++)	|	72	|	[Edit Distance](https://oj.leetcode.com/problems/edit-distance/)	| Hard	|
|	[C++](./Stack/SimplifyPath.C++)	|	71	|	[Simplify Path](https://oj.leetcode.com/problems/simplify-path/)	| Medium	|
|	[C++](./DP/ClimbingStairs.C++)	|	70	|	[Climbing Stairs](https://oj.leetcode.com/problems/climbing-stairs/)	| Easy	|
|	[C++](./Search/Sqrtx.C++)	|	69	|	[Sqrt(x)](https://oj.leetcode.com/problems/sqrtx/)	| Medium	|
|	[C++](./String/TextJustification.C++)	|	68	|	[Text Justification](https://oj.leetcode.com/problems/text-justification/)	| Hard	|
|	[C++](./Math/AddBinary.C++)	|	67	|	[Add Binary](https://oj.leetcode.com/problems/add-binary/)	| Easy	|
|	[C++](./Math/PlusOne.C++)	|	66	|	[Plus One](https://oj.leetcode.com/problems/plus-one/)	| Easy	|
|	[C++](./Math/ValidNumber.C++)	|	65	|	[Valid Number](https://oj.leetcode.com/problems/valid-number/)	| Hard	|
|	[C++](./DP/MinimumPathSum.C++) |	64	|	[Minimum Path Sum](https://oj.leetcode.com/problems/minimum-path-sum/)	| Medium	|
|	[C++](./DP/UniquePathsII.C++)	|	63	|	[Unique Paths II](https://oj.leetcode.com/problems/unique-paths-ii/)	| Medium	|
|	[C++](./DP/UniquePaths.C++)	|	62	|	[Unique Paths](https://oj.leetcode.com/problems/unique-paths/)	| Medium	|
|	[C++](./LinkedList/RotateList.C++)	|	61	|	[Rotate List](https://oj.leetcode.com/problems/rotate-list/)	| Medium	|
|	[C++](./Math/PermutationSequence.C++)	|	60	|	[Permutation Sequence](https://oj.leetcode.com/problems/permutation-sequence/)	| Medium	|
|	[C++](./Array/SpiralMatrixII.C++)	|	59	|	[Spiral Matrix II](https://oj.leetcode.com/problems/spiral-matrix-ii/)	| Medium	|
|	[C++](./String/LengthLastWord.C++)	|	58	|	[Length of Last Word](https://oj.leetcode.com/problems/length-of-last-word/)	| Easy	|
| [C++](./Sort/InsertInterval.C++) |	57	|	[Insert Interval](https://oj.leetcode.com/problems/insert-interval/)	| Hard	|
|	[C++](./Sort/MergeIntervals.C++)	|	56	|	[Merge Intervals](https://oj.leetcode.com/problems/merge-intervals/)	| Hard	|
|	[C++](./DP/JumpGame.C++) |	55	|	[Jump Game](https://oj.leetcode.com/problems/jump-game/)	| Medium	|
|	[C++](./Array/SpiralMatrix.C++)	|	54	|	[Spiral Matrix](https://oj.leetcode.com/problems/spiral-matrix/)	| Medium	|
|	[C++](./DP/MaximumSubarray.C++)	|	53	|	[Maximum Subarray](https://oj.leetcode.com/problems/maximum-subarray/)	| Medium	|
|	[C++](./DFS/NQueensII.C++)	|	52	|	[N-Queens II](https://oj.leetcode.com/problems/n-queens-ii/)	| Hard	|
|	[C++](./DFS/NQueens.C++)	|	51	|	[N-Queens](https://oj.leetcode.com/problems/n-queens/)	| Hard	|
|	[C++](./Math/Pow.C++)	|	50	|	["Pow(x, n)"](https://oj.leetcode.com/problems/powx-n/)	| Medium	|
|	[C++](./String/GroupAnagrams.C++)	|	49	|	[Group Anagrams](https://oj.leetcode.com/problems/anagrams/)	| Medium	|
|	[C++](./Array/RotateImage.C++)	|	48	|	[Rotate Image](https://oj.leetcode.com/problems/rotate-image/)	| Medium	|
|	[C++](./DFS/PermutationsII.C++)	|	47	|	[Permutations II](https://oj.leetcode.com/problems/permutations-ii/)	| Medium	|
|	[C++](./DFS/Permutations.C++)	|	46	|	[Permutations](https://oj.leetcode.com/problems/permutations/)	| Medium	|
|		|	45	|	[Jump Game II](https://oj.leetcode.com/problems/jump-game-ii/)	| Hard	|
|	[C++](./DP/WildcardMatching.C++)	|	44	|	[Wildcard Matching](https://oj.leetcode.com/problems/wildcard-matching/)	| Hard	|
|	[C++](./String/MultiplyStrings.C++)	|	43	|	[Multiply Strings](https://oj.leetcode.com/problems/multiply-strings/)	| Medium	|
|	[C++](./Math/TrappingRainWater.C++)	|	42	|	[Trapping Rain Water](https://oj.leetcode.com/problems/trapping-rain-water/)	| Hard	|
|	[C++](./Array/FirstMissingPositive.C++)	|	41	|	[First Missing Positive](https://oj.leetcode.com/problems/first-missing-positive/)	| Hard	|
|	[C++](./DFS/combinationSumII.C++c)	|	40	|	[Combination Sum II](https://oj.leetcode.com/problems/combination-sum-ii/)	| Medium	|
|	[C++](./DFS/CombinationSum.C++)	|	39	|	[Combination Sum](https://oj.leetcode.com/problems/combination-sum/)	| Medium	|
|	[C++](./String/CountAndSay.C++)	|	38	|	[Count and Say](https://oj.leetcode.com/problems/count-and-say/)	| Easy	|
|	[C++](./Math/SudokuSolver.C++)	|	37	|	[Sudoku Solver](https://oj.leetcode.com/problems/sudoku-solver/)	| Hard	|
|	[C++](./Array/ValidSudoku.C++)	|	36	|	[Valid Sudoku](https://oj.leetcode.com/problems/valid-sudoku/)	| Easy	|
|	[C++](./Search/SearchInsertPosition.C++)	|	35	|	[Search Insert Position](https://oj.leetcode.com/problems/search-insert-position/)	| Medium	|
|	[C++](./Search/SearchForARange.C++)	|	34	|	[Search for a Range](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)	| Medium	|
|	[C++](./Search/SearchInRotatedSortedArray.C++)	|	33	|	[Search in Rotated Sorted Array](https://oj.leetcode.com/problems/search-in-rotated-sorted-array/)	| Hard	|
|	[C++](./Stack/LongestValidParentheses.C++)	|	32	|	[Longest Valid Parentheses](https://oj.leetcode.com/problems/longest-valid-parentheses/)	| Hard	|
|	[C++](./Array/NextPermutation.C++)	|	31	|	[Next Permutation](https://oj.leetcode.com/problems/next-permutation/)	| Medium	|
|		|	30	|	[Substring with Concatenation of All Words](https://oj.leetcode.com/problems/substring-with-concatenation-of-all-words/)	| Hard	|
|	[C++](./Math/DivideTwoIntegers.C++)	|	29	|	[Divide Two Integers](https://oj.leetcode.com/problems/divide-two-integers/)	| Medium	|
|	[C++](./String/StrStr.C++)	|	28	|	[Implement strStr()](https://oj.leetcode.com/problems/implement-strstr/)	| Easy	|
|	[Swfit](./Array/RemoveElement.C++)	|	27	|	[Remove Element](https://oj.leetcode.com/problems/remove-element/)	| Easy	|
|	[C++](./Array/RemoveDuplicatesFromSortedArray.C++)	|	26	|	[Remove Duplicates from Sorted Array](https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array/)	| Easy	|
|		|	25	|	[Reverse Nodes in k-Group](https://oj.leetcode.com/problems/reverse-nodes-in-k-group/)	| Hard	|
|	[C++](./LinkedList/SwapNodesInPairs.C++)	|	24	|	[Swap Nodes in Pairs](https://oj.leetcode.com/problems/swap-nodes-in-pairs/)	| Easy	|
|	[C++](./LinkedList/MergeKSortedLists.C++)	|	23	|	[Merge k Sorted Lists](https://oj.leetcode.com/problems/merge-k-sorted-lists/)	| Hard	|
|	[C++](./Math/GenerateParentheses.C++)	|	22	|	[Generate Parentheses](https://oj.leetcode.com/problems/generate-parentheses/)	| Medium	|
|	[C++](./LinkedList/MergeTwoSortedLists.C++)	|	21	|	[Merge Two Sorted Lists](https://oj.leetcode.com/problems/merge-two-sorted-lists/)	| Easy	|
|	[C++](./Stack/ValidParentheses.C++)	|	20	|	[Valid Parentheses](https://oj.leetcode.com/problems/valid-parentheses/)	| Easy	|
|	[C++](./LinkedList/RemoveNthFromEnd.C++)	|	19	|	[Remove Nth Node From End of List](https://oj.leetcode.com/problems/remove-nth-node-from-end-of-list/)	| Easy	|
|	[C++](./Array/FourSum.C++)	|	18	|	[4Sum](https://oj.leetcode.com/problems/4sum/)	| Medium	|
|	[C++](./DFS/LetterCombinationsPhoneNumber.C++)	|	17	|	[Letter Combinations of a Phone Number](https://oj.leetcode.com/problems/letter-combinations-of-a-phone-number/)	| Medium	|
|	[C++](./Array/ThreeSum.C++)	|	16	|	[3Sum Closest](https://oj.leetcode.com/problems/3sum-closest/)	| Medium	|
|	[C++](./Array/ThreeSum.C++)	|	15	|	[3Sum](https://oj.leetcode.com/problems/3sum/)	| Medium	|
|	[C++](./String/LongestCommonPrefix.C++)	|	14	|	[Longest Common Prefix](https://oj.leetcode.com/problems/longest-common-prefix/)	| Easy	|
|	[C++](./Math/RomanToInteger.C++)	|	13	|	[Roman to Integer](https://oj.leetcode.com/problems/roman-to-integer/)	| Easy	|
|	[C++](./Math/IntegerToRoman.C++)	|	12	|	[Integer to Roman](https://oj.leetcode.com/problems/integer-to-roman/)	| Medium	|
|	[C++](./Math/ContainerMostWater.C++)	|	11	|	[Container With Most Water](https://oj.leetcode.com/problems/container-with-most-water/)	| Medium	|
|	[C++](./DP/RegularExpressionMatching.C++)	|	10	|	[Regular Expression Matching](https://oj.leetcode.com/problems/regular-expression-matching/)	| Hard	|
|	[C++](./Math/PalindromeNumber.C++)	|	9	|	[Palindrome Number](https://oj.leetcode.com/problems/palindrome-number/)	| Easy	|
|	[C++](./Math/Atoi.C++)	|	8	|	[String to Integer (atoi)](https://oj.leetcode.com/problems/string-to-integer-atoi/)	| Easy	|
|	[C++](./Math/ReverseInteger.C++)	|	7	|	[Reverse Integer](https://oj.leetcode.com/problems/reverse-integer/)	| Easy	|
|	[C++](./String/ZigZagConversion.C++)	|	6	|	[ZigZag Conversion](https://oj.leetcode.com/problems/zigzag-conversion/)	| Easy	|
|	[C++](./DP/LongestPalindromicSubstring.C++)	|	5	|	[Longest Palindromic Substring](https://oj.leetcode.com/problems/longest-palindromic-substring/)	| Medium	|
|	[C++](./Search/MedianOfTwoSortedArrays.C++)	|	4	|	[Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)	| Hard	|
|	[C++](./String/LongestSubstringWithoutRepeatingCharacters.C++)	|	3	|	[Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)	| Medium	|
|	[C++](./Math/AddTwoNumbers.C++)	|	2	|	[Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)	| Medium	|
|	[C++](./Array/TwoSum.C++)	|	1	|	[Two Sum](https://leetcode.com/problems/two-sum/)	| Easy	|
