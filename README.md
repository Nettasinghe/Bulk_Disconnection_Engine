# Bulk_Disconnection_Engine

Telco Services Disconnection Module for Defaulted Subscribers.

The purpose of this module is to facilitate the service disconnection Defaulted Subscribers. If a certain Telco subscriber / customer does not pay the due bill amounts within a certain time period (credit / grace period), the Telco takes action to temporary bar the services of HLR by sending a command through the Provisioning System. If not settled the dues within certain further time period, the services will be disconnected on permanent basis and the subscriber profile is deactivated in HLR. Bulk Disconnection Engine implements the disconnection logic by fetching the relevant customer and network data from CRM and Provisioning Databases, processing them and writing the required results to relevant databases to facilitate the Provisioning System to send the relevant commands to the HLR.
