/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
// // Solution 1:Iterative O(n)
// class Solution {
//     public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
//         ListNode dummy = new ListNode(0);
//         ListNode tail = dummy;
//         while (l1 != null && l2 != null) {
//             if (l1.val < l2.val) {
//                 tail.next = l1;
//                 l1 = l1.next;
//             } else {
//                 tail.next = l2;
//                 l2 = l2.next;
//             }
//             tail = tail.next;
//         }
        
//         if (l1 != null) tail.next = l1;
//         if (l2 != null) tail.next = l2;
        
//         return dummy.next;
//     }
// }

// Solution 2:Recursive O(n)
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        // If one of the list is emptry, return the other one.
        if (l1 == null || l2 == null) return l1 != null ? l1 : l2;
        // The smaller one becomes the head.
        if (l1.val < l2.val) {
            l1.next = mergeTwoLists(l1.next, l2);
            return l1;
        } else {
            l2.next = mergeTwoLists(l1, l2.next);
            return l2;
        }
    }
}
