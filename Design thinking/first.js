document.addEventListener('DOMContentLoaded', () => {
    // Trip type toggle
    const tripOptions = document.querySelectorAll('.trip-option');
    const returnDateField = document.querySelector('.return-date');
    
    tripOptions.forEach(option => {
        option.addEventListener('click', () => {
            tripOptions.forEach(opt => opt.classList.remove('active'));
            option.classList.add('active');
            
            if(option.id === 'round-trip') {
                returnDateField.querySelector('input').disabled = false;
            } else {
                returnDateField.querySelector('input').disabled = true;
            }
        });
    });

    // Swap cities
    const swapBtn = document.getElementById('swap-cities');
    swapBtn.addEventListener('click', () => {
        const fromCity = document.getElementById('from-city');
        const toCity = document.getElementById('to-city');
        const temp = fromCity.value;
        fromCity.value = toCity.value;
        toCity.value = temp;
    });

    // Traveler dropdown
    const travelerInput = document.getElementById('travelers-input');
    const travelerDropdown = document.getElementById('traveler-dropdown');
    
    travelerInput.addEventListener('click', () => {
        travelerDropdown.classList.toggle('show');
    });

    // Passenger counter
    let adultCount = 1;
    let childCount = 0;
    
    document.getElementById('adult-plus').addEventListener('click', () => {
        adultCount++;
        updatePassengerCount();
    });
    
    document.getElementById('adult-minus').addEventListener('click', () => {
        if(adultCount > 1) {
            adultCount--;
            updatePassengerCount();
        }
    });
    
    document.getElementById('child-plus').addEventListener('click', () => {
        childCount++;
        updatePassengerCount();
    });
    
    document.getElementById('child-minus').addEventListener('click', () => {
        if(childCount > 0) {
            childCount--;
            updatePassengerCount();
        }
    });
    
    function updatePassengerCount() {
        document.getElementById('adult-count').textContent = adultCount;
        document.getElementById('child-count').textContent = childCount;
        travelerInput.value = `${adultCount} Adult${adultCount !== 1 ? 's' : ''}, ${childCount} Child${childCount !== 1 ? 'ren' : ''}`;
    }

    // Class selection
    const classOptions = document.querySelectorAll('.class-option');
    classOptions.forEach(option => {
        option.addEventListener('click', () => {
            classOptions.forEach(opt => opt.classList.remove('active'));
            option.classList.add('active');
        });
    });

    // Date restrictions
    const today = new Date().toISOString().split('T')[0];
    document.getElementById('depart-date').setAttribute('min', today);
    document.getElementById('return-date').setAttribute('min', today);

    // Close dropdown when clicking outside
    window.addEventListener('click', (e) => {
        if (!e.target.closest('.traveler-class')) {
            travelerDropdown.classList.remove('show');
        }
    });
});