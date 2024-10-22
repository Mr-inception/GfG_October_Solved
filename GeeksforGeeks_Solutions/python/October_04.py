class Solution:

    def reverse(self, head):
        if not head:
            return None
        
        prev = None
        current = head
        tail = head          
        
        while True:
            next_node = current.next
            current.next = prev
            prev = current
            current = next_node
            
            if current == head:
                break
        
        tail.next = prev
        return prev  



    def deleteNode(self, head, key):
        if not head:
            return None
        
        current = head
        prev = None
        
        if current.data == key and current.next == head:
            return None  
        
        while True:
            if current.data == key:
                if prev:
                    prev.next = current.next
                else:
                    while current.next != head:
                        current = current.next
                    current.next = head.next  
                    head = head.next  
                break
            
            prev = current
            current = current.next
            
            if current == head:
                break
        
        return head