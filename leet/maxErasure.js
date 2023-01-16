/**
 * @param {number[]} nums
 * @return {number}
 */
 var maximumUniqueSubarray = function(nums) {
    let l = 0;
    let r = 0;
    let set = new Set();
    let maxsum = 0;
    let sum = 0;
    for(; r < nums.length; r++) {
        sum = 0;
        while(l!==r && set.has(nums[r])) {
            set.delete(nums[l]);
            l++;
        }
        for(let i = l; i <= r; i++) {
            sum = sum + nums[i];
        }
        maxsum = Math.max(sum, maxsum);
        set.add(nums[r]);
    }
    return maxsum;
};

console.log(maximumUniqueSubarray([10000,1,10000,1,1,1,1,1,1]));